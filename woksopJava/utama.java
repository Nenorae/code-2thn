import java.io.*;
public class utama {
    public static void main(String[] args) throws IOException {
        BufferedReader k = new BufferedReader(new InputStreamReader(System.in));

        // Instance of Class
        mahasiswa mhs = new mahasiswa();

        // Input data
        System.out.print("Masukkan Nama Depan: ");
        String namaDepan = k.readLine();
        System.out.print("Masukkan Nama Belakang: ");
        String namaBelakang = k.readLine();
        System.out.print("Masukkan Alamat: ");
        String alamat = k.readLine();
        System.out.print("Masukkan Umur: ");
        int umur = Integer.parseInt(k.readLine());
        System.out.print("Masukkan Iuran SEMA: ");
        Double Sema = Double.parseDouble(k.readLine());
        System.out.print("Masukkan Jumlah Bulan: ");
        int Bulan = Integer.parseInt(k.readLine());

        // Memanggil Setter
        mhs.setnamadepan(namaDepan);
        mhs.setnamabelakang(namaBelakang);
        mhs.setalamat(alamat);
        mhs.setumur(umur);
        mhs.setbulan(Bulan);
        mhs.setsema(Sema);

        // Output
        System.out.println("-------Output Program------");
        System.out.println("Nama Depan Mahasiswa: " + mhs.getnamadepan());
        System.out.println("Nama Belakang Mahasiswa: " + mhs.getnamabelakang());
        System.out.println("Alamat Mahasiswa: " + mhs.getalamat());
        System.out.println("Umur Mahasiswa: " + mhs.getumur());
        System.out.println("Total Bayar Iuran SEMA: " + mhs.biayasema() + " untuk " + mhs.getbulan() + " bulan");
    }
}
