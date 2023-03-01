import java.util.Random;
import java.util.Scanner;

/**
 * Principal.java
 * Busqueda binaria
 * 
 * @author Jose Luis Cruz
 *         2023/03/1
 *         GPLv3
 * @version 0.1
 */
public class Principal {
    public static void main(String[] args) {
        int[] arreglo = new int[20];
        Random rand = new Random();
        Scanner scan = new Scanner(System.in);
        int valor = 0;
        for (int i = 0; i < arreglo.length; i++) {
            arreglo[i] = rand.nextInt(-20, 20);
        }
        burbuja(arreglo);
        System.out.print("Usuario, por favor, escriba un entero entre -20 y 20: ");
        valor = scan.nextInt();
        System.out.println("El numero " + valor + " " + 
        (buscar(arreglo, valor) ? "SE ENCONTRO :D" : "NO SE ENCONTRO :("));
        scan.close();
    }

    public static boolean buscar(int[] arr, int valor) {
        int min = 0;
        int max = arr.length - 1;
        int mid = 0;
        while (min <= max) {
            mid = (min + max) / 2;
            if (arr[mid] == valor) {
                return true;
            } else {
                if (valor > arr[mid]) {
                    min = mid + 1;
                } else {
                    max = mid - 1;
                }
            }
        }

        return false;
    }

    public static void burbuja(int[] arr) {
        int tmp;
        for (int i = arr.length - 1; i > 0; i--) {
            for (int j = 0; j < i; j++) {
                if (arr[j] > arr[j + 1]) {
                    tmp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = tmp;
                }
            }
        }
    }
}