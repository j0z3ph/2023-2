/**
 * Principal.java
 * Clase principal.
 * @author Jose Luis 
 * @since 2023/03/06
 * GPLv3
 */

public class Principal {
    public static void main(String[] args) {
        Cuadrado cuadrado = new Cuadrado(4);
        //Figura fig = new Figura(3, 4);

        System.out.println("Area: " + cuadrado.area() + 
        "\nPerimetro: " + cuadrado.perimetro());
    }
}
