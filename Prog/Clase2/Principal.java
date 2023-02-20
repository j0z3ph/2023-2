/**
 * Principal.java
 * Mi primer programa
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * 2023-02-20
 * GPL v3
 */

import java.util.Scanner;

public class Principal {
    /**
     * Funcion principal
     * @param args Argumentos de entrada
     */
    public static void main(String[] args) {
        int var1, var2;
        double prom;
        Scanner scann = new Scanner(System.in);
        System.out.print("Escriba el primer numero: ");
        var1 = scann.nextInt();
        System.out.print("Escriba el segundo numero: ");
        var2 = scann.nextInt();
        prom = Math.sqrt(Math.pow(var1, 2) + Math.pow(var2, 2));
        System.out.println("La raiz de la suma de los cuadrados es: " + prom);
        scann.close();
    }
}
