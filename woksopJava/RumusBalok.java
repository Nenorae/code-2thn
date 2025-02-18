abstract class RumusBalok {
    protected double panjang, lebar, tinggi;
    
    public RumusBalok(double p, double l, double t) {
        this.panjang = p;
        this.lebar = l;
        this.tinggi = t;
    }
    
    public double getPanjang() {
        return panjang;
    }
    
    public double getLebar() {
        return lebar;
    }
    
    public double getTinggi() {
        return tinggi;
    }
    
    // Definisi metode abstrak
    public abstract double HitungBalok();
}
