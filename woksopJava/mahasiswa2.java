public class mahasiswa2 {
    String namaD, namaB, almt;
    int nim,umr;

    public mahasiswa2(String nmdepan, String nmbelakang, int nim){
       this.namaD=nmdepan;
       this.namaB=nmbelakang;
       this.nim=nim;
    }
    mahasiswa2(String almt, int umr){
        this.almt=almt;
        this.umr=umr;

    }
    void tampil(){
        System.out.println("nama lengkap: "+namaD+" "+namaB);
    }
}
