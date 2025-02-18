package modul5;

import java.io.*;

public class utama {
    public static void main(String[] kri) throws IOException {
        BufferedReader k = new BufferedReader(new InputStreamReader(System.in));
        
        // OBJECT
        kalkulator kal = new kalkulator();
        
        // INPUT
        System.out.print("Inputkan angka 1: ");
        Double angl = Double.parseDouble(k.readLine());
        System.out.print("Inputkan angka 2: ");
        Double ang2 = Double.parseDouble(k.readLine());
        kal = new kalkulator(angl, ang2);
        System.out.println("");
        
        // OUTPUT
        System.out.print("Hasil Penjumlahan: ");
        kal.penjumlahan();
        System.out.print("Hasil Pengurangan: ");
        kal.pengurangan();
        System.out.println("Hasil Perkalian: " + kal.perkalian());
        System.out.println("Hasil Pembagian: " + kal.pembagian());
    }
}
