import java.util.Scanner;

public class Utama3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Tiket tiket = new Tiket(); // Login happens here
        
        int pilihan;
        
        do {
            // Display menu
            System.out.println("\n=== MENU ===");
            System.out.println("1. Input Data Transaksi");
            System.out.println("2. Lihat Data Tiket");
            System.out.println("3. Keluar");
            System.out.print("Pilih menu: ");
            pilihan = input.nextInt();
            
            switch (pilihan) {
                case 1:
                    tiket.inputDataTransaksi();
                    break;
                case 2:
                    tiket.lihatDataTiket();
                    break;
                case 3:
                    System.out.println("Selamat tinggal!");
                    break;
                default:
                    System.out.println("Pilihan tidak valid.");
            }
        } while (pilihan != 3);
    }
}
