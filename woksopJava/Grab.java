// Kelas Grab
class Grab extends OjekOnline {

    // Konstruktor untuk menginisialisasi total
    public Grab(double total) {
        super(total);
    }

    // Override metode pembayaran dengan diskon 10%
    @Override
    public double pembayaran() {
        return total - (total * 0.10);  // Diskon 10%
    }
}
