final class KelilingBalok extends RumusBalok {
    public KelilingBalok(double p, double l, double t) {
        super(p, l, t);
    }
    
    @Override
    public final double HitungBalok() {
        return 4 * (panjang + lebar + tinggi);
    }
}
