import java.io.*;

public class Utama6 {
    public static void main(String[] kri) throws IOException {
        BufferedReader k = new BufferedReader(new InputStreamReader(System.in));
        Manusia2[] mns = new Manusia2[2];
        int i=0;

        do {
            System.out.println("User " + (i + 1));
            System.out.print("Masukkan tinggi badan anda (cm): ");
            double tb = Double.parseDouble(k.readLine());
            System.out.print("Masukkan jenis kelamin (L/P): ");
            String jenkel = k.readLine();

            if (jenkel.toUpperCase().equals("L")) {
                mns[i] = new Laki(tb);
                System.out.println("Berat badan ideal seorang laki-laki seperti anda adalah: " + mns[i].HtgBB());
            } else {
                mns[i] = new Perempuan(tb);
                System.out.println("Berat badan ideal seorang perempuan seperti anda adalah: " + mns[i].HtgBB());
            }
            i++;
        } while (i < 2);
    }
}
