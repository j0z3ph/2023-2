import java.util.Scanner;

public class Principal {
    public static void main(String[] args) {
        Lista lista = new Lista();
        String resp = "";
        int value;
        Scanner scann = new Scanner(System.in);
        do {
            System.out.print("Proporcione un numero: ");
            value = Integer.parseInt(scann.nextLine());
            lista.add(value);
            System.out.print("Agregar otro?[s/n] ");
            resp = scann.nextLine();
        } while (resp.toLowerCase().startsWith("s"));
        lista.print();
        scann.close();
    }
}
