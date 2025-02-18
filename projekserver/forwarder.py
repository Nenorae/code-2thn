import socket
import json
import smtplib
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
from urllib.parse import unquote  

FORWARDER_IP = "127.0.0.1"
FORWARDER_PORT = 53547
WEB_SERVER_IP = "127.0.0.1"
WEB_SERVER_PORT = 53548

# Konfigurasi SMTP
SMTP_SERVER = "smtp.gmail.com" 
SMTP_PORT = 587
EMAIL_ADDRESS = "your_email@example.com"  
EMAIL_PASSWORD = "your_password"  

def send_email(subject, body, recipient_email):
    """Fungsi untuk mengirim email menggunakan SMTP."""
    try:
        # Buat email dengan format MIME
        msg = MIMEMultipart()
        msg["From"] = EMAIL_ADDRESS
        msg["To"] = recipient_email
        msg["Subject"] = subject
        msg.attach(MIMEText(body, "plain"))

        # Kirim email melalui server SMTP
        with smtplib.SMTP(SMTP_SERVER, SMTP_PORT) as server:
            server.starttls()  # Enkripsi koneksi
            server.login(EMAIL_ADDRESS, EMAIL_PASSWORD)
            server.sendmail(EMAIL_ADDRESS, recipient_email, msg.as_string())
        print(f"Email berhasil dikirim ke {recipient_email}")
    except Exception as e:
        print(f"Error saat mengirim email: {e}")

def forwarder():
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as forwarder_socket:
        forwarder_socket.bind((FORWARDER_IP, FORWARDER_PORT))
        forwarder_socket.listen(5)
        print(f"Forwarder Server berjalan di {FORWARDER_IP}:{FORWARDER_PORT}")

        while True:
            client_conn, client_addr = forwarder_socket.accept()
            with client_conn:
                print(f"Terhubung dengan Client: {client_addr}")
                try:
                    # Terima data dari Client
                    data = client_conn.recv(1024).decode()
                    print("Data diterima dari Client:", data)
                    message = json.loads(data)

                    # Decode data jika URL-encoded
                    message = {k: unquote(v) for k, v in message.items()}

                    # Kirim data ke Web Server
                    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as web_socket:
                        web_socket.connect((WEB_SERVER_IP, WEB_SERVER_PORT))
                        web_socket.sendall(json.dumps(message).encode())
                        print("Data berhasil diteruskan ke Web Server.")

                    # Siapkan dan kirim email
                    email_subject = "Pesan Baru dari Client"
                    email_body = (
                        f"Email: {message.get('email', 'N/A')}\n"
                        f"Nama: {message.get('name', 'N/A')}\n"
                        f"Pesan: {message.get('message', 'N/A')}"
                    )
                    recipient_email = message.get("email", EMAIL_ADDRESS)  # Default recipient jika tidak ada email
                    send_email(email_subject, email_body, recipient_email)
                except json.JSONDecodeError:
                    print("Error: Data yang diterima tidak valid.")
                except ConnectionRefusedError:
                    print("Gagal terhubung ke Web Server.")

if __name__ == "__main__":
    forwarder()