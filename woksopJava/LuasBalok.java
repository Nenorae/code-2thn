class LuasBalok extends RumusBalok {
    public LuasBalok(double p, double l, double t) {
        super(p, l, t);
    }

    @Override
    public double HitungBalok() {
    return 2 * (panjang * lebar + panjang * tinggi + lebar *tinggi);
    }
}