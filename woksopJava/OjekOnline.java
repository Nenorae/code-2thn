// Kelas Utama
abstract class OjekOnline {
    protected double total;

    // Konstruktor untuk menginisialisasi total
    public OjekOnline(double total) {
        this.total = total;
    }

    // Getter untuk mendapatkan total biaya sebelum diskon
    public double getTot() {
        return total;
    }

    // Metode pembayaran yang akan di-overridden oleh subclass
    public double pembayaran() {
        return total;
    }
}
