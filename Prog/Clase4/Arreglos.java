import java.util.Scanner;

/**
 * Arreglos.java
 * Ejemplo de arreglos
 * @author Jose Luis Cruz (jlcruz@ipn.mx)
 * 2023/02/24
 * GPLv3
 */
public class Arreglos {
    public static void main(String[] args) {
        final int MAX = 5;
        int arreglo[] = new int[MAX];
        int cont = 0, suma = 0;
        double promedio = 0.0;
        Scanner scan = new Scanner(System.in);
        while(cont < MAX) {
            System.out.print("Escriba un valor: ");
            arreglo[cont] = Integer.parseInt(scan.nextLine());
            
            cont++;
        }
        scan.close();
        for (int val : arreglo) {
            suma+=val;
        }
        promedio =(double)suma / (double)MAX;
        System.out.println("El promedio es " + promedio);
    }
}
