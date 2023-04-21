import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.BorderLayout;

public class Ventana {
    public static void main(String[] args) {
        JFrame ventana = new JFrame("Borderlayout");
        ventana.setSize(600, 600);
        ventana.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton btn1 = new JButton("Centro");
        JButton btn2 = new JButton("Norte");
        JButton btn3 = new JButton("Sur");
        JButton btn4 = new JButton("Este");
        JButton btn5 = new JButton("Oeste");


        ventana.add(btn1, BorderLayout.CENTER);
        ventana.add(btn2, BorderLayout.NORTH);
        ventana.add(btn3, BorderLayout.SOUTH);
        ventana.add(btn4, BorderLayout.EAST);
        ventana.add(btn5, BorderLayout.WEST);

        ventana.setVisible(true);
    }
}