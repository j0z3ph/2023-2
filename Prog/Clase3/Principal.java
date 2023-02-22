import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        int arreglo[] = new int[10];
        Scanner scann = new Scanner(System.in);

        for (int i = 0; i < arreglo.length; i++) {
            System.out.print("Usuario, escrube un entero: ");
            arreglo[i] = scann.nextInt();
        }
        scann.close();

        /*
        for (int item : arreglo) {
            System.out.print( item + ", ");
        }*/
        System.out.println(Arrays.toString(arreglo));

    }
}