import java.io.DataOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.net.ServerSocket;
import java.net.Socket;

public class Server {

    static Socket sk;
    static ServerSocket server;
    final static int PORT = 666;
    public static void main(String[] args) {
        try {
            server = new ServerSocket(PORT);
            sk = server.accept();
            OutputStream os = sk.getOutputStream();
            DataOutputStream dos = new DataOutputStream(os);
            dos.writeUTF("Hola cliente");
            os.flush();
            dos.close();
            os.close();
            sk.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}