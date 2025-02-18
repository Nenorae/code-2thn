import java.util.Scanner;

public class Tiket {
    private String username;
    private String password;
    private String namaHotel;
    private int jumlahKamar;
    private double hargaPerKamar;
    private String namaPesawat;
    private int jumlahPenumpang;
    private double hargaTiketPesawat;
    private String tujuan;
    
    // Constructor for login process
    public Tiket() {
        Scanner input = new Scanner(System.in);
        
        System.out.println("=== LOGIN ===");
        System.out.print("Username: ");
        this.username = input.nextLine();
        
        System.out.print("Password: ");
        this.password = input.nextLine();
        
        // Check if login is successful
        if (this.username.equals("admin") && this.password.equals("123")) {
            System.out.println("Login berhasil!\n");
        } else {
            System.out.println("Username atau password salah. Program ditutup.");
            System.exit(0); // Exit if login fails
        }
    }
    
    // Method to input transaction data
    public void inputDataTransaksi() {
        Scanner input = new Scanner(System.in);
        
        System.out.print("Nama Hotel: ");
        this.namaHotel = input.nextLine();
        
        System.out.print("Jumlah Kamar: ");
        this.jumlahKamar = input.nextInt();
        
        System.out.print("Harga Per Kamar: ");
        this.hargaPerKamar = input.nextDouble();
        input.nextLine(); // Consume newline left-over
        
        System.out.print("Nama Pesawat: ");
        this.namaPesawat = input.nextLine();
        
        System.out.print("Jumlah Penumpang: ");
        this.jumlahPenumpang = input.nextInt();
        
        System.out.print("Harga Tiket Pesawat: ");
        this.hargaTiketPesawat = input.nextDouble();
        input.nextLine(); // Consume newline left-over
        
        System.out.print("Tujuan: ");
        this.tujuan = input.nextLine();
        
        System.out.println("\nData transaksi berhasil diinput!");
    }
    
    // Method to display ticket details
    public void lihatDataTiket() {
        if (namaHotel == null || namaPesawat == null) {
            System.out.println("Belum ada data transaksi. Silakan input data transaksi terlebih dahulu.");
            return;
        }
        
        // Calculate total biaya kamar hotel with 45% discount
        double diskonKamar = 0.45 * hargaPerKamar;
        double totalBiayaKamar = (hargaPerKamar - diskonKamar) * jumlahKamar;
        
        // Calculate total harga tiket pesawat with insurance (Rp 29,000 per passenger)
        double hargaTiket = hargaTiketPesawat * jumlahPenumpang;
        double totalTiketPesawat = hargaTiket + (jumlahPenumpang * 29000);
        
        System.out.println("===== DATA TRANSAKSI TIKET =====");
        System.out.println("Nama Hotel: " + namaHotel);
        System.out.println("Jumlah Kamar: " + jumlahKamar);
        System.out.println("Harga Per Kamar: Rp " + hargaPerKamar);
        System.out.println("Diskon Kamar (45%): Rp " + diskonKamar);
        System.out.println("Total Biaya Kamar: Rp " + totalBiayaKamar);
        
        System.out.println("Nama Pesawat: " + namaPesawat);
        System.out.println("Jumlah Penumpang: " + jumlahPenumpang);
        System.out.println("Harga Tiket Pesawat: Rp " + hargaTiketPesawat);
        System.out.println("Asuransi (Rp 29,000 per penumpang): Rp " + (jumlahPenumpang * 29000));
        System.out.println("Total Harga Tiket: Rp " + totalTiketPesawat);
        System.out.println("Tujuan: " + tujuan);
    }
}
