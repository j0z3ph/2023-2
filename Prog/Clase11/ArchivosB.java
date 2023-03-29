import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.sql.Date;
import java.util.ArrayList;
import java.util.List;

public class ArchivosB {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        List<Alumno> alumnos = new ArrayList<Alumno>();

        alumnos.add(new Alumno("Juanito", 
        "20150012", "Torres", 
        "Castañeda", "1995-01-01", 
        6.8));

        alumnos.add(new Alumno("Uriel", 
        "20150011", "Trejo", 
        "Perez", "1997-05-01", 
        7.1));

        alumnos.add(new Alumno("Kemoni", 
        "20150011", "Trejo", 
        "Zambrano", "2024-01-01", 
        6.0));

        File archivo = new File("archivo.txt");
        if(!archivo.exists()) {
            archivo.createNewFile();
        }

        // Escritura
        FileOutputStream fos = new FileOutputStream(archivo);
        ObjectOutputStream oos = new ObjectOutputStream(fos);

        oos.writeInt(alumnos.size());
        for (Alumno alumno : alumnos) {
            oos.writeObject(alumno);
        }
        oos.close();
        fos.close();

        // Lectura
        FileInputStream fis = new FileInputStream(archivo);
        ObjectInputStream ois = new ObjectInputStream(fis);

        List<Alumno> nlista = new ArrayList<Alumno>();
        int n = ois.readInt();
        for (int i = 0; i < n; i++) {
            Alumno al = (Alumno)ois.readObject();
            nlista.add(al);
        }

        ois.close();
        fis.close();

        nlista.size();

    }
}
