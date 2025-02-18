package modul5;

public class kalkulator implements operasi{
    private double angka1,angka2;

    public kalkulator(){
    }

    public kalkulator (double angka1, double angka2){
        this.angka1=angka1;
        this.angka2=angka2;
    }

    //getter
    public double getangka1(){
        return angka1;

    }
    public double getangka2(){
        return angka2;
    }

    //method
    public void penjumlahan(){
        System.out.println(angka1+angka2);
    }
    public void pengurangan(){
        System.out.println(angka1-angka2);
    }
    public double perkalian(){
        return angka1*angka2;
    }
    public double pembagian(){
       return angka1/angka2;
    }


}
