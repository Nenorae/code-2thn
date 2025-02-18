package modul5;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Rumus rumus = null;  // Inisialisasi objek rumus sebagai null
        int pilihan;

        do {
            // Tampilkan menu
            System.out.println("-----MENU-----");
            System.out.println("1. Input Data Bangun Ruang dan Bangun Datar");
            System.out.println("2. Lihat Data Bangun Ruang dan Bangun Datar");
            System.out.println("3. Keluar");
            System.out.print("Inputkan menu pilihan anda: ");
            pilihan = Integer.parseInt(br.readLine());

            switch (pilihan) {
                case 1:
                    // Input data bangun ruang dan bangun datar
                    System.out.println("\n***INPUT DATA Bangun Ruang***");
                    System.out.print("Input jari-jari: ");
                    double r = Double.parseDouble(br.readLine());

                    System.out.print("Input tinggi: ");
                    double t = Double.parseDouble(br.readLine());

                    System.out.print("Inputkan alas: ");
                    double a = Double.parseDouble(br.readLine());

                    // Buat objek Rumus dengan data yang diinput
                    rumus = new Rumus(r, t, a);
                    System.out.println("DATA SAVED\n");
                    break;

                case 2:
                    // Lihat data bangun ruang dan bangun datar
                    if (rumus != null) {
                        System.out.println("\n***Lihat Data Bangun Ruang dan Bangun Datar***");
                        System.out.println("Bangun Ruang");

                        // Menampilkan hasil perhitungan bangun ruang
                        System.out.println("Volume Kerucut: " + rumus.VolumeKerucut());
                        System.out.println("Volume Bola: " + rumus.VolumeBola());
                        System.out.println("Volume Tabung: " + rumus.VolumeTabung());

                        System.out.println("\nBangun Datar");

                        // Menampilkan hasil perhitungan bangun datar
                        System.out.println("Luas Lingkaran: " + String.format("%.2f", rumus.LuasLingkaran()));
                        System.out.println("Luas Segitiga: " + String.format("%.2f", rumus.LuasSegitiga()));
                    } else {
                        System.out.println("\nBelum ada data yang diinput!\n");
                    }
                    break;

                case 3:
                    System.out.println("Keluar...");
                    break;

                default:
                    System.out.println("Pilihan tidak valid, coba lagi.\n");
                    break;
            }
        } while (pilihan != 3);  // Loop berlanjut sampai pilihan 3 (keluar)
    }
}
