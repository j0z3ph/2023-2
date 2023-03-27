import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class Archivos {
    public static void main(String[] args) throws IOException {
        File archivo = new File("archivo.txt");
        int[][] m = new int[2][2];
        m[0][0] = 1;
        m[0][1] = 2;
        m[1][0] = 3;
        m[1][1] = 4;
        
        if(!archivo.exists()) {
            archivo.createNewFile();
        }
        // Escritura

        FileOutputStream fos = new FileOutputStream(archivo);
        DataOutputStream dos = new DataOutputStream(fos);
        dos.writeInt(2);
        dos.writeInt(2);
        for (int f = 0; f < 2; f++) {
            for (int c = 0; c < 2; c++) {
                dos.writeInt(m[f][c]);
            }
        }
        dos.close();
        fos.close();

        // Lectura
        FileInputStream fis = new FileInputStream(archivo);
        DataInputStream dis = new DataInputStream(fis);
        int filas = dis.readInt();
        int columnas = dis.readInt();
        int[][] nm = new int[filas][columnas];
        for (int f = 0; f < filas; f++) {
            for (int c = 0; c < columnas; c++) {
                nm[f][c] = dis.readInt();
            }
        }
        dis.close();
        fis.close();


        
    }
}
