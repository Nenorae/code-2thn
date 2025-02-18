public class laptop extends elektronik{
    private String namamodel ="thinkpad";
    public static void main(String[] args) {
        elektronik lap = new elektronik();
        laptop L = new laptop();

        
        lap.spesifikasi();
        System.out.println("brand laptop: "+lap.brand+" "+L.namamodel);
    } 
}
