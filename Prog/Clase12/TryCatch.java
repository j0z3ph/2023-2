import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.ArrayList;
import java.util.List;

import javax.swing.JOptionPane;

public class TryCatch {
    public static void main(String[] args) {
        File f = new File("holiss.txt");
        List<String> lista = new ArrayList<>();
        //FileOutputStream fos = null;
        //ObjectOutputStream oos = null;
        lista.add("Hola");
        lista.add("a");
        lista.add("todos");
        /*try {
            fos = new FileOutputStream(f);
            oos = new ObjectOutputStream(fos);
            oos.writeObject(lista);
        } catch(FileNotFoundException fnfe) {
            JOptionPane.showMessageDialog(null, "El archivo no existe", "ERROR", JOptionPane.ERROR_MESSAGE);
        } catch(IOException ioe) {
            JOptionPane.showMessageDialog(null, "No fue posible escribir en el archivo", "ERROR", JOptionPane.ERROR_MESSAGE);
        } finally {
            try{
                oos.close();
                fos.close();
            }catch(Exception ex) {
            }
        }*/

        try (FileOutputStream fos = new FileOutputStream(f)) {
            try (ObjectOutputStream oos = new ObjectOutputStream(fos)) {
                oos.writeObject(lista);
            } catch (IOException e) {
                JOptionPane.showMessageDialog(null, "No fue posible escribir en el archivo", "ERROR", JOptionPane.ERROR_MESSAGE);
            }
        } catch (IOException e) {
            JOptionPane.showMessageDialog(null, "El archivo no existe", "ERROR", JOptionPane.ERROR_MESSAGE);
        }

    }
}
