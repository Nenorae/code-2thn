import socket
import json
from http.server import BaseHTTPRequestHandler, HTTPServer
from urllib.parse import unquote  # Tambahkan untuk decoding URL-encoded data

WEB_SERVER_IP = "127.0.0.1"
WEB_SERVER_PORT = 53548

# Simpan semua pesan yang diterima dari Forwarder
received_messages = []

class WebHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        # Tampilkan semua pesan di halaman web
        global received_messages

        if received_messages:
            messages_html = "".join(
                f"""
                <tr>
                    <td>{unquote(msg.get('email', 'N/A'))}</td>
                    <td>{unquote(msg.get('name', 'N/A'))}</td>
                    <td>{unquote(msg.get('message', 'N/A'))}</td>
                </tr>
                """ for msg in received_messages
            )
            html_response = f"""
            <html>
                <body>
                    <h1>Pesan dari Client</h1>
                    <table border="1">
                        <thead>
                            <tr>
                                <th>Email</th>
                                <th>Nama</th>
                                <th>Pesan</th>
                            </tr>
                        </thead>
                        <tbody>
                            {messages_html}
                        </tbody>
                    </table>
                </body>
            </html>
            """
        else:
            html_response = """
            <html>
                <body>
                    <h1>Tidak ada pesan diterima</h1>
                </body>
            </html>
            """

        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()
        self.wfile.write(html_response.encode())

# Fungsi untuk menerima data dari Forwarder
def receive_from_forwarder():
    global received_messages
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as web_socket:
        web_socket.bind((WEB_SERVER_IP, WEB_SERVER_PORT))
        web_socket.listen(5)
        print(f"Web Server berjalan di {WEB_SERVER_IP}:{WEB_SERVER_PORT} (untuk TCP data)")

        while True:
            forwarder_conn, forwarder_addr = web_socket.accept()
            with forwarder_conn:
                print(f"Terhubung dengan Forwarder: {forwarder_addr}")
                try:
                    data = forwarder_conn.recv(1024).decode()
                    print("Data mentah diterima dari Forwarder:", data)

                    message = json.loads(data)
                    print("Data diterima di Web Server (JSON valid):", message)
                    
                    # Simpan pesan ke daftar
                    received_messages.append(message)
                except json.JSONDecodeError as e:
                    print("Error: Data yang diterima tidak valid.", e)

# Jalankan HTTP server dan listener socket bersamaan
if _name_ == "_main_":
    from threading import Thread

    # Thread untuk menerima data dari Forwarder
    listener_thread = Thread(target=receive_from_forwarder, daemon=True)
    listener_thread.start()

    # Jalankan HTTP Server
    http_server = HTTPServer((WEB_SERVER_IP, 8080), WebHandler)
    print("HTTP Server berjalan di http://127.0.0.1:8080")
    http_server.serve_forever()