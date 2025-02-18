public class Utama5 {
    public static void main(String[] args) {
        //OBJECT
        Manusia[] mns = new Manusia[3];
        mns[0] = new Mahasiswa3();
        mns[1] = new Dosen();
        mns[2] = new Programmer();
        
        //OUTPUT
        for (int i = 0; i < mns.length; i++) {
            mns[i].aktivitas();
            System.out.println("");
        }
    }
}
