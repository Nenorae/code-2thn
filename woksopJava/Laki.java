public class Laki extends Manusia2 {
    // CONSTRUCTOR
    public Laki(double tb) {
        super(tb);
    }

    // METHOD HtgBB disini merupakan method overriding dari superclassnya
    public double HtgBB() {
        return (super.getTinggiBadan() - 100) * 0.9;
    }
}