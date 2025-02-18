public class latihanmethod {
    static void staticmethod(){
        System.out.println("method statuc");
    }

    public void publicmethod(){
        System.out.println("method public");
    }

    public static void main(String[] args) {
        staticmethod(); //memanggil method static
        //publicmethod(); //jika ini dirun maka akan error
        latihanmethod objekmethod = new latihanmethod(); //membuat objekbaru
        objekmethod.publicmethod();

    }
}
