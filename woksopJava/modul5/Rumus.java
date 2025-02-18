package modul5;

public class Rumus implements BangunRuang, BangunDatar {
    double r;  // Radius atau alas
    double t;  // Tinggi
    double a;  // Sisi alas segitiga

    // Constructor
    public Rumus(double r, double t, double a) {
        this.r = r;
        this.t = t;
        this.a = a;
    }

    // Getter (Opsional, jika ingin mengakses properti dari luar class)
    public double getR() {
        return r;
    }

    public double getT() {
        return t;
    }

    public double getA() {
        return a;
    }

    // Implementasi metode BangunRuang
    @Override
    public double VolumeKerucut() {
        return (1.0 / 3.0) * Math.PI * r * r * t;
    }

    @Override
    public double VolumeBola() {
        return (4.0 / 3.0) * Math.PI * Math.pow(r, 3);
    }

    @Override
    public double VolumeTabung() {
        return Math.PI * r * r * t;
    }

    // Implementasi metode BangunDatar
    @Override
    public double LuasLingkaran() {
        return Math.PI * r * r;
    }

    @Override
    public double LuasSegitiga() {
        return 0.5 * a * t;
    }
}
