import java.util.Scanner;

class Rekening {
    // Atribut private
    private String nomorRekening;
    private String nama;
    private double saldo;

    // Setter untuk nomor rekening
    public void setNomorRekening(String nomorRekening) {
        this.nomorRekening = nomorRekening;
    }

    // Getter untuk nomor rekening
    public String getNomorRekening() {
        return this.nomorRekening;
    }

    // Setter untuk nama
    public void setNama(String nama) {
        this.nama = nama;
    }

    // Getter untuk nama
    public String getNama() {
        return this.nama;
    }

    // Setter untuk saldo
    public void setSaldo(double saldo) {
        this.saldo = saldo;
    }

    // Getter untuk saldo
    public double getSaldo() {
        return this.saldo;
    }

    // Method untuk menambah saldo (menabung)
    public void menabung(double nominal) {
        if (nominal > 0) {
            this.saldo += nominal;
            System.out.println("selamat anda berhasil menabung sebesar Rp " + nominal);
        } else {
            System.out.println("masukin yang bener.");
        }
    }

    // Method untuk mengurangi saldo (tarik uang)
    public void tarikUang(double nominal) {
        if (nominal > 0 && nominal <= this.saldo) {
            this.saldo -= nominal;
            System.out.println("anda berhasil menarik saldo Rp " + nominal);
        } else if (nominal > this.saldo) {
            System.out.println("uangmu kurang .");
        } else {
            System.out.println("Nominal tidak valid.");
        }
    }

    // Method untuk cek saldo
    public void cekSaldo() {
        System.out.println("Saldo anda: Rp " + this.saldo);
    }
}

public class tariktunai {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        // Membuat objek rekening
        Rekening rekening = new Rekening();

        // Input data rekening
        System.out.print("Inputkan Nomor Rekening: ");
        String nomorRekening = input.nextLine();
        rekening.setNomorRekening(nomorRekening);

        System.out.print("Inputkan Nama: ");
        String nama = input.nextLine();
        rekening.setNama(nama);

        System.out.print("Inputkan Saldo: ");
        double saldo = input.nextDouble();
        rekening.setSaldo(saldo);

        // Pilihan menu
        int pilihan;
        do {
            System.out.println("\nSaldo anda: Rp " + rekening.getSaldo());
            System.out.println("1. Menabung");
            System.out.println("2. Tarik Uang");
            System.out.println("3. Cek Saldo");
            System.out.println("0. Keluar");
            System.out.print("Silakan memilih: ");
            pilihan = input.nextInt();

            switch (pilihan) {
                case 1: // Menabung
                    System.out.print("Inputkan Nominal: ");
                    double nominalTabung = input.nextDouble();
                    rekening.menabung(nominalTabung);
                    break;

                case 2: // Tarik Uang
                    System.out.print("Inputkan Nominal: ");
                    double nominalTarik = input.nextDouble();
                    rekening.tarikUang(nominalTarik);
                    break;

                case 3: // Cek Saldo
                    rekening.cekSaldo();
                    break;

                case 0: // Keluar
                    System.out.println("Terima kasih telah menggunakan layanan kami.");
                    break;

                default:
                    System.out.println("Pilihan tidak valid.");
                    break;
            }
        } while (pilihan != 0);
        
        input.close();
    }
}
