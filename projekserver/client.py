import socket
from http.server import BaseHTTPRequestHandler, HTTPServer
import json
from urllib.parse import unquote  # Untuk decoding URL-encoded data

CLIENT_IP = "127.0.0.1"
CLIENT_PORT = 8081
FORWARDER_IP = "127.0.0.1"
FORWARDER_PORT = 53547

class ClientHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        # Tampilkan form input
        html_form = """
        <html>
            <body>
                <h1>Kirim Pesan ke Web Server</h1>
                <form action="/" method="post">
                    <label for="email">Email:</label><br>
                    <input type="email" id="email" name="email" required><br><br>
                    <label for="name">Nama:</label><br>
                    <input type="text" id="name" name="name" required><br><br>
                    <label for="message">Pesan:</label><br>
                    <textarea id="message" name="message" rows="4" cols="50" required></textarea><br><br>
                    <button type="submit">Kirim</button>
                </form>
            </body>
        </html>
        """
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()
        self.wfile.write(html_form.encode())

    def do_POST(self):
        # Tangkap data dari form
        content_length = int(self.headers['Content-Length'])
        post_data = self.rfile.read(content_length).decode()
        form_data = dict(item.split("=") for item in post_data.split("&"))
        form_data = {k: unquote(v.replace("+", " ")) for k, v in form_data.items()}  # Decode URL-encoded characters

        # Format data sebagai JSON
        message = {
            "email": form_data.get("email", ""),
            "name": form_data.get("name", ""),
            "message": form_data.get("message", "")
        }
        print("Pesan dari Form:", message)

        # Kirim data ke Forwarder
        try:
            with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as client_socket:
                client_socket.connect((FORWARDER_IP, FORWARDER_PORT))
                client_socket.sendall(json.dumps(message).encode())
                print("Pesan berhasil dikirim ke Forwarder.")
        except ConnectionRefusedError:
            print("Gagal terhubung ke Forwarder Server.")

        # Tampilkan halaman sukses
        success_page = """
        <html>
            <body>
                <h1>Pesan Berhasil Dikirim!</h1>
                <a href="/">Kembali</a>
            </body>
        </html>
        """
        self.send_response(200)
        self.send_header("Content-type", "text/html")
        self.end_headers()
        self.wfile.write(success_page.encode())

if __name__ == "__main__":
    http_server = HTTPServer((CLIENT_IP, CLIENT_PORT), ClientHandler)
    print(f"Client HTTP Server berjalan di http://{CLIENT_IP}:{CLIENT_PORT}")
    http_server.serve_forever()