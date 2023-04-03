import java.io.File;
import java.io.FileWriter;
import java.io.IOException;

/**
 * Verificada.java
 * Ejemplo de Excepciones
 * Autor: Yo merengues
 * Fecha: 2023/04/03
 */

public class Verificada {
    public static void main(String[] args) {
        File f = new File("holi.txt");
        try {
            FileWriter fw = new FileWriter(f);
            fw.write("Holi");
            fw.close();
            System.out.println("Mensaje guardado");
        } catch (IOException ex) {
            System.out.println("El archivo es de solo lectura, favor de verificar.");
        }
        System.out.println("Adios");
    }
}