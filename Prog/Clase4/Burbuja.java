
/**
 * Burbuja.java
 * Ejemplo de manejo de arreglos
 * @author Jose Luis Cruz
 * 2023/02/27
 * GPLv3
 */

import java.util.Arrays;
import java.util.Random;

public class Burbuja {
    /**
     * Funcion prinicpal
     * @param args Argumentos de entrada
     */
    public static void main(String[] args) {
        int[] arreglo = new int[1000000];
        Random rand = new Random();
        // Generamos un arreglo de numeros pseudoaleatorios
        for (int i = 0; i < arreglo.length; i++) {
            arreglo[i] = rand.nextInt(-100, 100);
        }
        //System.out.println(Arrays.toString(arreglo));
        // Ordenamos con el algoritmo de la burbuja
        burbuja(arreglo);
    }

    /**
     * Ordena un arreglo de menor a mayor utilizando
     * el arlgoritmo de la burbuja
     * @param arr Arreglo  de enteros a ordenar.
     */
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
        //System.out.println(Arrays.toString(arr));
    }
}
