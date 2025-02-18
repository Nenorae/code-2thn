public class Main {
    public static void main(String[] args) {
        // Memesan layanan Gojek
        OjekOnline gojek = new Gojek(50000);  // Total biaya: 50000
        System.out.println("Gojek:");
        System.out.println("Total sebelum diskon: " + gojek.getTot());
        System.out.println("Total setelah diskon: " + gojek.pembayaran());

        // Memesan layanan Grab
        OjekOnline grab = new Grab(50000);  // Total biaya: 50000
        System.out.println("\nGrab:");
        System.out.println("Total sebelum diskon 10%: " + grab.getTot());
        System.out.println("Total setelah diskon 10%: " + grab.pembayaran());

        
        OjekOnline uber = new Uber(50000);  // Total biaya: 50000
        System.out.println("\nUber:");
        System.out.println("Total sebelum diskon 15%: " + uber.getTot());
        System.out.println("Total setelah diskon 15%: " + uber.pembayaran());
    }
}
