public class elektronik2 {
    private String brand, warna; // Remove static from brand and warna
    private Double berat;

    // Default constructor
    public elektronik2() {
    }

    // Constructor with parameters
    public elektronik2(String brand, String warna, Double berat) {
        this.brand = brand;
        this.warna = warna;
        this.berat = berat;
    }

    // Setter for brand
    public void setbrand(String brand) {
        this.brand = brand;
    }

    // Setter for warna
    public void setwarna(String warna) {
        this.warna = warna; // Fixed the missing semicolon
    }

    // Setter for berat (should accept Double)
    public void setberat(Double berat) {
        this.berat = berat;
    }

    // Getter for brand
    public String getbrand() {
        return brand;
    }

    // Getter for warna
    public String getwarna() {
        return warna;
    }

    // Getter for berat (should return Double)
    public Double getberat() {
        return berat;
    }
}
