package figuras.tresd;
public class Rectangulo implements IFigura {

    protected double base ;
    protected double altura;

    public Rectangulo(double b, double altura) {
        this.base = b;
        this.altura = altura;
    }

    @Override
    public double area() {
        return base * altura;
    }

    protected int area(int v) {
        return (int)base*(int)altura;
    }

    @Override
    public double perimetro() {
        return 2*base + 2*altura;
    }
    
}
