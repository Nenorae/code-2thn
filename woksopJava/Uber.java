// Kelas Uber
final class Uber extends OjekOnline {

    // Konstruktor untuk menginisialisasi total
    public Uber(double total) {
        super(total);
    }

    // Override metode pembayaran dengan diskon 15%
    @Override
    public double pembayaran() {
        return total - (total * 0.15);  // Diskon 15%
    }
}
