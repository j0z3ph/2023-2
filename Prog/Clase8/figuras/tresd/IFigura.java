package figuras.tresd;
public interface IFigura {
    public double base = 0.0;

    public double area();
    public double perimetro();

    default double volumen() {
        return 0.0;
    }
}