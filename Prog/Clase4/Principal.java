/**
 * Principal.java
 * Ejemplo de cadenas
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * 2023/02/24
 * GPLv3
 */

public class Principal {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder();

        sb.append("Hola")
        .append(System.lineSeparator())
        .append("a")
        .append(System.lineSeparator())
        .append("todos");

        System.out.println(sb.toString());
    }
}