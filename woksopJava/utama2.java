import java.io.*;

public class utama2 {
    public static void main(String[] kri) throws IOException{
        BufferedReader k = new BufferedReader(new InputStreamReader(System.in));

        login user1 = new login(); // Menggunakan constructor default (admin/1234)
        login user2 = new login("", ""); // Inisialisasi user2 dengan string kosong

        while (true) {
            System.out.println("Menu login");
            System.out.println("1. login");
            System.out.println("2. Buat User");
            System.out.println("3. Ubah Password");
            System.out.println("4. Lihat Data User");
            System.out.println("5. Keluar");

            System.out.println("Masukkan pilihan: ");
            int pilihan = Integer.parseInt(k.readLine());
            System.out.println("");

            switch (pilihan) {
                case 1:
                    // Isi dari pilihan no. 1
                    System.out.println("Masukkan Username: ");
                    String user = k.readLine();
                    System.out.println("Masukkan Password: ");
                    String pass = k.readLine();
                    System.out.println("");

                    // Pengecekan penginputan user dan password benar atau salah
                    if (user.equalsIgnoreCase(user1.getusername()) && pass.equalsIgnoreCase(user1.getpassword())) {
                        System.out.println("login BERHASIL");

                    } else if(user.equalsIgnoreCase(user2.getusername()) && pass.equalsIgnoreCase(user2.getpassword())) {
                        System.out.println("login BERHASIL");

                    } else{
                        // Jika pengecekan user dan password salah
                        System.out.println("login GAGAL");
                    }
                    break;

                case 2:
                    // Isi dari pilihan no. 2
                    System.out.println("Masukkan Username: ");
                    String newUser = k.readLine();
                    System.out.println("Masukkan Password: ");
                    String newPass = k.readLine();

                    user2 = new login(newUser, newPass);
                    System.out.println("");
                    System.out.println("USER BERHASIL DIBUAT");
                    break;

                case 3:
                    // Isi dari pilihan no. 3
                    System.out.println("Masukkan Password Lama: ");
                    String passLama = k.readLine();
                    System.out.println("Masukkan Password Baru: ");
                    String passBaru = k.readLine();
                    System.out.println("");

                    // Proses pembuatan password baru
                    if (passLama.equalsIgnoreCase(user1.getpassword())) {
                        user1.setpassword(passBaru);
                        System.out.println("PASSWORD BERHASIL DIUBAH");
                    } else {
                        // Mengecek inputan password lama
                        System.out.println("ANDA SALAH MEMASUKKAN PASSWORD LAMA");
                    }
                    System.out.println("");
                    break;

                case 4:
                    System.out.println("------LIHAT DATA USER 1------");
                    System.out.println("User 1");
                    System.out.println("Username User 1: " + user1.getusername());
                    System.out.println("Password User 1: " + user1.getpassword());
                    System.out.println("");

                    System.out.println("------LIHAT DATA USER 2------");
                    System.out.println("User 2");
                    System.out.println("Username User 2: " + user2.getusername());
                    System.out.println("Password User 2: " + user2.getpassword());
                    System.out.println("");
                    break;

                case 5:
                    System.out.println("Keluar...");
                    System.exit(0); // Menghentikan program
                    break;

                default:
                    System.out.println("Pilihan tidak valid");
                    break;
            }
        }
    }
}
