public class mahasiswa {
    private String namadepan, namabelakang, alamat;
    private int umur, bulan;
    private double sema;
    
    // Setters
    public void setnamadepan(String namaD) {
        this.namadepan = namaD;
    }

    public void setnamabelakang(String namab) {
        this.namabelakang = namab;
    }

    public void setalamat(String almt) {
        this.alamat = almt;
    }

    public void setumur(int umr) {
        this.umur = umr;
    }

    public void setsema(double sma) {
        this.sema = sma;
    }

    public void setbulan(int bln) {
        this.bulan = bln;
    }

    // Getters
    public String getnamadepan() {
        return namadepan;
    }

    public String getnamabelakang() {
        return namabelakang;
    }

    public String getalamat() {
        return alamat;
    }

    public int getumur() {
        return umur;
    }

    public double getsema() {
        return sema;
    }

    public int getbulan() {
        return bulan;
    }

    // Method to calculate semester cost
    public double biayasema() {
        double biaya = getbulan() * getsema();
        return biaya;
    }
}
