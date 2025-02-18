import java.util.Scanner;

public class ProyeksiTabungan {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input jumlah tabungan awal
        System.out.print("Masukkan jumlah tabungan: ");
        double tabungan = scanner.nextDouble();

        // Suku bunga per tahun untuk 10 tahun
        double[] bunga4 = new double[10];
        double[] bunga5 = new double[10];
        double[] bunga6 = new double[10];
        double[] bunga7 = new double[10];

        // Menghitung proyeksi tabungan untuk masing-masing bunga
        for (int i = 0; i < 10; i++) {
            if (i == 0) {
                bunga4[i] = tabungan * 1.04;
                bunga5[i] = tabungan * 1.05;
                bunga6[i] = tabungan * 1.06;
                bunga7[i] = tabungan * 1.07;
            } else {
                bunga4[i] = bunga4[i - 1] * 1.04;
                bunga5[i] = bunga5[i - 1] * 1.05;
                bunga6[i] = bunga6[i - 1] * 1.06;
                bunga7[i] = bunga7[i - 1] * 1.07;
            }
        }

        // Mencetak header tabel
        System.out.println("================================================================");
        System.out.printf("%-10s %-10s %-10s %-10s %-10s%n", "Tahun", "4%", "5%", "6%", "7%");
        System.out.println("================================================================");

        // Menampilkan proyeksi tabungan untuk 10 tahun
        for (int i = 0; i < 10; i++) {
            System.out.printf("Tahun ke-%-2d = %-10.1f %-10.1f %-10.1f %-10.1f%n", (i + 1), bunga4[i], bunga5[i], bunga6[i], bunga7[i]);
        }

        scanner.close();
    }
}
