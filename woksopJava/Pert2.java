public class Pert2 {
    public static void main(String[] args) {
        mahasiswa2 objek = new mahasiswa2("kristin","lebda",16153);
        mahasiswa2 objek2 = new mahasiswa2("surabaya",18);
        System.out.println("nama mahasiswa: "+objek.namaD+" "+objek.namaB);
        System.out.println("nim: "+objek.nim);
        objek.tampil();
        System.out.println("umur: "+objek2.umr);
        System.out.println("alamat: "+objek2.almt);
    }
}
