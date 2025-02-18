public final class Perempuan extends Manusia2 {
    // CONSTRUCTOR
    public Perempuan(double tb) {
        super(tb);
    }

    // METHOD HtgBB disini merupakan method overriding dari superclassnya
    public double HtgBB() {
        return (super.getTinggiBadan() - 100) * 0.8;
    }
}