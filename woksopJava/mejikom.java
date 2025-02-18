public class mejikom extends elektronik2 {
    private Double kapasitas_tanak;
    private String aksesoris;

    // Constructor
    public mejikom(String brand, String warna, Double berat, Double kapasitas_tanak, String aksesoris) {
        super.setbrand(brand); // Set brand from superclass
        super.setwarna(warna); // Set color from superclass
        super.setberat(berat); // Set weight from superclass
        this.kapasitas_tanak = kapasitas_tanak; // Set kapasitas menanak
        this.aksesoris = aksesoris; // Set aksesoris
    }

    // Setter for kapasitas menanak
    public void setkapasitasmenanak(Double kap_menanak) {
        this.kapasitas_tanak = kap_menanak;
    }

    // Setter for aksesoris
    public void setaksesoris(String akse) {
        this.aksesoris = akse;
    }

    // Getter for brand
    public String getbrand() {
        return super.getbrand();
    }

    // Getter for warna
    public String getwarna() {
        return super.getwarna();
    }

    // Getter for aksesoris
    public String getaksesoris() {
        return this.aksesoris;
    }

    // Getter for kapasitas menanak
    public Double getkapasitasmenanak() {
        return this.kapasitas_tanak;
    }

    // Getter for berat
    public Double getberat() {
        return super.getberat();
    }
}
