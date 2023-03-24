import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Principal {
    public static void main(String[] args) throws FileNotFoundException {
        File archivo = new File("archivos/archivo.txt");
        Scanner scann = new Scanner(archivo);

        while(scann.hasNextLine()) {
            System.out.println(scann.nextLine());
        }

        scann.close();
    }
}
