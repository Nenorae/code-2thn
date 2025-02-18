package modul5;

class example {
   final int MAX_VALUE = 100;  // Variabel final diinisialisasi saat deklarasi

    public void display() {
        // MAX_VALUE = 200;  // Ini akan menyebabkan error karena MAX_VALUE adalah final
        System.out.println("Max Value: " + MAX_VALUE);
    } 
}
