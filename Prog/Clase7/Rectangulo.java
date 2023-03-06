/**
 * Rectangulo.java
 * Clase Rectangulo.
 * @author Jose Luis 
 * @since 2023/03/06
 * GPLv3
 */

public class Rectangulo extends Figura {
    
    public Rectangulo(int base, int altura) {
        super(base, altura);
    }

    @Override
    /**
     * 
     */
    public double area() {
        
        return base * altura;
    }

    /**
     * 
     * @param base
     * @param altura
     * @return
     */
    public double area(int base, int altura) {
        return base * altura;
    }

    /**
     * 
     */
    @Override
    public double perimetro() {
        return 2*base + 2*altura;
    }
}
