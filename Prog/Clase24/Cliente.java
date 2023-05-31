import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.net.Socket;

public class Cliente {
    static Socket cliente;
    final static int PORT = 666;
    public static void main(String[] args) {
        try {
            cliente = new Socket("localhost", PORT);
            InputStream is = cliente.getInputStream();
            DataInputStream dis = new DataInputStream(is);
            String cadena = dis.readUTF();
            System.out.println(cadena);
            dis.close();
            is.close();
            cliente.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        
    }
}
