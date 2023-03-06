public class Cuadrado extends Figura {
    public Cuadrado(int lado) {
        super(lado, lado);
    }

    @Override
    public double area() {
        return base * altura;
    }

    @Override
    public double perimetro() {
        return 4*altura;
    }

    
}
