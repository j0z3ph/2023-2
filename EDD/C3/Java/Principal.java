/**
 * Principal.java
 * Programa de prueba de la estructura Lista
 */

import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Lista lista = new Lista();
        String resp = "";
        int value, idx;
        Scanner scann = new Scanner(System.in);
        do {
            System.out.print("Proporcione un numero: ");
            value = Integer.parseInt(scann.nextLine());
            lista.add(value);
            System.out.print("Agregar otro?[s/n] ");
            resp = scann.nextLine();
        } while (resp.toLowerCase().startsWith("s"));
        lista.print();

        System.out.print("Proporcione el valor a buscar: ");
        value = Integer.parseInt(scann.nextLine());
        if (lista.find(value) != null)
            System.out.println("Econtrado :D");
        else
            System.out.println("No Econtrado :(");

        do {
            System.out.print("Proporcione un numero: ");
            value = Integer.parseInt(scann.nextLine());
            System.out.print("Proporcione el indice: ");
            idx = Integer.parseInt(scann.nextLine());
            try {
                lista.add(value, idx);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
            System.out.print("Agregar otro?[s/n] ");
            resp = scann.nextLine();
        } while (resp.toLowerCase().startsWith("s"));
        lista.print();

        scann.close();
    }
}
