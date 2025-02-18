// Class MatematikaCanggihBeraksi
import java.util.Scanner;

public class matematikacanggihberaksi {
    public static void main(String[] args) {
        // Create an instance of MatematikaCanggih
        MatematikaCanggih mc = new MatematikaCanggih();
        
        // Scanner object to get input from user
        Scanner input = new Scanner(System.in);
        
        // Input first and second number
        System.out.print("Masukkan angka pertama: ");
        int angka1 = input.nextInt();
        
        System.out.print("Masukkan angka kedua: ");
        int angka2 = input.nextInt();
        
        // Performing the operations
        System.out.println("----------------------------");
        System.out.println("        Hasil Operasi       ");
        System.out.println("----------------------------");
        
        // Addition
        System.out.println(angka1 + " + " + angka2 + " = " + mc.tambah(angka1, angka2));
        
        // Subtraction
        System.out.println(angka1 + " - " + angka2 + " = " + mc.kurang(angka1, angka2));
        
        // Modulus
        System.out.println(angka1 + " % " + angka2 + " = " + mc.modulus(angka1, angka2));
        
        input.close();
    }
}