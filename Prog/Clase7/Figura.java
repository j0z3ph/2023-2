/**
 * Figura.java
 * Clase figura.
 * @author Jose Luis 
 * @since 2023/03/06
 * GPLv3
 */

public abstract class Figura {
    protected int base;
    protected int altura;

    /**
     * Crea una instancia de la clase Figura
     * @param base Base de la figura
     * @param altura Altura de la figura
     */
    public Figura(int base, int altura) {
        this.base = base;
        this.altura = altura;
    }

    /**
     * Calcula el area de la figura
     * @return Area
     */
    public abstract double area();

    /**
     * Calcula el perimetro de la figura
     * @return Perimetro
     */
    public abstract double perimetro();
}