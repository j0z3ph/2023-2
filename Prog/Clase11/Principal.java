import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Principal {

    public static void main(String[] args) throws IOException {
        File archivo = new File("archivo.txt");
        if(!archivo.exists()) {
            archivo.createNewFile();
        }
        FileWriter fw = new FileWriter(archivo, true);
        fw.write("Kenini es el rey de los Chapulines\nAlix tiro un servidor");
        fw.close();
        

        Scanner scann = new Scanner(archivo);
        while(scann.hasNextLine()) {
            System.out.println(scann.nextLine());
        }
        scann.close();
    }
}