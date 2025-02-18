import java.io.*;

class Konversi {
    public void hitungPembagian() {
        int a = 7;
        int b = 9;
        System.out.println(a + "/" + b + " = " + (double) a / b);
        System.out.println();
    }
}

class Buffered {
    public void mintaNama() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Masukkan nama Anda: ");
        String nama = br.readLine();
        System.out.println("Nama saya adalah: " + nama);
    }
}

class Buffered2 {
    public void mintaktm() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Masukkan nama Anda: ");
        String nama = br.readLine();
        System.out.print("Masukkan NRP Anda: ");
        long NRP = Long.parseLong(br.readLine()); // Menggunakan tipe long untuk NRP
        System.out.print("Masukkan jurusan Anda: ");
        String jurusan = br.readLine();
        System.out.println("Nama saya adalah: " + nama);
        System.out.println("NRP saya adalah: " + NRP);
        System.out.println("Jurusan saya adalah: " + jurusan); // Penggunaan variabel yang benar
    }
}

public class MainProgram {
    public static void main(String[] args) throws IOException {
        Konversi konversi = new Konversi();
        Buffered buffered = new Buffered();
        Buffered2 buffered2 = new Buffered2(); // Perbaikan di sini

        konversi.hitungPembagian();
        buffered.mintaNama();
        buffered2.mintaktm(); // Perbaikan di sini
    }
}
