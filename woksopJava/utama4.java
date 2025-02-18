import java.io.*;

public class utama4 {
    public static void main(String[] args) throws IOException {
        BufferedReader k = new BufferedReader(new InputStreamReader(System.in));
        mejikom rice = new mejikom(" ", " ", 0.0, 0.0, " ");
        
        // menu
        while (true) {
            System.out.println("---menu elektronik---");
            System.out.println("1. input data mejikom");
            System.out.println("2. lihat data mejikom");
            System.out.println("3. keluar");

            // input pilihan
            System.out.print("masukkan pilihan: ");
            int pilihan = 0;
            try {
                pilihan = Integer.parseInt(k.readLine());
            } catch (NumberFormatException e) {
                System.out.println("Pilihan harus berupa angka. Coba lagi.");
                continue;
            }

            System.out.println(" ");

            switch(pilihan) {
                // MENU 1: Input data
                case 1:
                    System.out.println("--INPUT DATA RICE COOKER--");
                    System.out.print("Inputkan brand Rice Cooker: ");
                    String brand = k.readLine();
                    
                    System.out.print("Inputkan warna Rice Cooker: ");
                    String warna = k.readLine();
                    
                    System.out.print("Inputkan berat Rice Cooker (kg): ");
                    Double berat = 0.0;
                    try {
                        berat = Double.parseDouble(k.readLine());
                    } catch (NumberFormatException e) {
                        System.out.println("Input berat harus berupa angka.");
                        break;
                    }
                    
                    System.out.print("Inputkan Kapasitas Memasak Rice Cooker (liter): ");
                    Double kapasitasMemasak = 0.0;
                    try {
                        kapasitasMemasak = Double.parseDouble(k.readLine());
                    } catch (NumberFormatException e) {
                        System.out.println("Input kapasitas memasak harus berupa angka.");
                        break;
                    }
                    
                    System.out.print("Inputkan Aksesoris Rice Cooker: ");
                    String aksesoris = k.readLine();
                    
                    // Update rice cooker object
                    rice = new mejikom(brand, warna, berat, kapasitasMemasak, aksesoris);
                    System.out.println();
                    System.out.println("DATA RICE COOKER BERHASIL DISIMPAN");
                    System.out.println();
                    break;
                    
                // MENU 2: Display data
                case 2:
                    System.out.println();
                    System.out.println("--LIHAT DATA RICE COOKER--");
                    System.out.println("Brand Rice Cooker: " + rice.getbrand());
                    System.out.println("Warna Rice Cooker: " + rice.getwarna());
                    System.out.println("Berat Rice Cooker: " + rice.getberat() + " kg");
                    System.out.println("Kapasitas Memasak Rice Cooker: " + rice.getkapasitasmenanak() + " Liter");
                    System.out.println("Aksesoris Rice Cooker: " + rice.getaksesoris());
                    System.out.println();
                    break;
                    
                // MENU 3: Exit
                case 3:
                    System.out.println("Terima kasih, program selesai.");
                    System.exit(0);
                    break;

                // Invalid option handling
                default:
                    System.out.println("Pilihan tidak valid, silakan coba lagi.");
                    break;
            }
        }
    }
}
