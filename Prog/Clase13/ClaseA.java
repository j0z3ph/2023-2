public class ClaseA {
    
    public int division(int a, int b) throws MiExepcion {
        if(b == 0) {
            throw new MiExepcion("Division entre cero.");
        }
        return a / b;
    }

    public double raiz(double num) throws MiExepcion2 {
        if(num < 0) {
            throw new MiExepcion2("La raiz es imaginaria.");
        }

        return Math.sqrt(num);
    }
}
