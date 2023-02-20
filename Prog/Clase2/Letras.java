import java.util.Scanner;

public class Letras {
    public static void main(String[] args) {
        Scanner scann = new Scanner(System.in);
        String cadena = scann.nextLine();
        System.out.println(((int)cadena.charAt(0)));

        scann.close();
    }
}
