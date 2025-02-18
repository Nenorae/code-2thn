public class EkspresiEmosional {
    public static void main(String[] args) {
        System.out.println("\n demo polimorfi");
        System.out.println("-------------");

        EkspresiWajah objEkspresi = new EkspresiWajah();
        Gembira objGembira = new Gembira();
        Sedih objSedih = new Sedih();
        Marah objMarah = new Marah();

        EkspresiWajah[] ekspresi = new EkspresiWajah[4];
        ekspresi[0] = objEkspresi;  // Super
        ekspresi[1] = objGembira;
        ekspresi[2] = objSedih;
        ekspresi[3] = objMarah;

        System.out.println("Ekspresi[0]: " + ekspresi[0].respons());
        System.out.println("Ekspresi[1]: " + ekspresi[1].respons());
        System.out.println("Ekspresi[2]: " + ekspresi[2].respons());
        System.out.println("Ekspresi[3]: " + ekspresi[3].respons());
    }
}
