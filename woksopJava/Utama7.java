public class Utama7 {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        
        // Input untuk User 1
        System.out.println("User 1");
        System.out.print("Masukkan jumlah panjang: ");
        double panjang1 = input.nextDouble();
        System.out.print("Masukkan jumlah lebar: ");
        double lebar1 = input.nextDouble();
        System.out.print("Masukkan jumlah tinggi: ");
        double tinggi1 = input.nextDouble();
        System.out.print("Pilih Luas Permukaan Balok atau Keliling Balok (L/K): ");
        char choice1 = input.next().charAt(0);
        
        if (choice1 == 'L') {
            LuasBalok luasBalok1 = new LuasBalok(panjang1, lebar1, tinggi1);
            System.out.println("Luas Permukaan Balok adalah = " + luasBalok1.HitungBalok());
        } else if (choice1 == 'K') {
            KelilingBalok kelilingBalok1 = new KelilingBalok(panjang1, lebar1, tinggi1);
            System.out.println("Keliling Balok adalah = " + kelilingBalok1.HitungBalok());
        }
        
        // Input untuk User 2
        System.out.println("\nUser 2");
        System.out.print("Masukkan jumlah panjang: ");
        double panjang2 = input.nextDouble();
        System.out.print("Masukkan jumlah lebar: ");
        double lebar2 = input.nextDouble();
        System.out.print("Masukkan jumlah tinggi: ");
        double tinggi2 = input.nextDouble();
        System.out.print("Pilih Luas Permukaan Balok atau Keliling Balok (L/K): ");
        char choice2 = input.next().charAt(0);
        
        if (choice2 == 'L') {
            LuasBalok luasBalok2 = new LuasBalok(panjang2, lebar2, tinggi2);
            System.out.println("Luas Permukaan Balok adalah = " + luasBalok2.HitungBalok());
        } else if (choice2 == 'K') {
            KelilingBalok kelilingBalok2 = new KelilingBalok(panjang2, lebar2, tinggi2);
            System.out.println("Keliling Balok adalah = " + kelilingBalok2.HitungBalok());
        }
        
        input.close();
    }
}
