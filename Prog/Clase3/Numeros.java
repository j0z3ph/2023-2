import java.util.Scanner;

public class Numeros {
    public static void main(String[] args) {
        Scanner scann = new Scanner(System.in);
        int n = 0;
        System.out.print("Proporciona un numero: ");
        n = scann.nextInt();
        System.out.println("El valor es " + ((n & 1) == 0 ? "PAR" : "IMPAR"));
        scann.close();
    }
}
