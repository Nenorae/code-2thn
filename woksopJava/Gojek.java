// Kelas Gojek
class Gojek extends OjekOnline {

    // Konstruktor untuk menginisialisasi total
    public Gojek(double total) {
        super(total);
    }

    // Override metode pembayaran dengan diskon 5%
    @Override
    public double pembayaran() {
        return total - (total * 0.05);  // Diskon 5%
    }
}
