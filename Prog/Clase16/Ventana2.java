import javax.swing.JButton;
import javax.swing.JFrame;
import java.awt.BorderLayout;
import java.awt.GridLayout;

public class Ventana2 {
    public static void main(String[] args) {
        JFrame ventana = new JFrame("Gridlayout");
        ventana.setSize(600, 600);
        ventana.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton btn1 = new JButton("Centro");
        JButton btn2 = new JButton("Norte");
        JButton btn3 = new JButton("Sur");
        JButton btn4 = new JButton("Este");
        JButton btn5 = new JButton("Oeste");


        ventana.add(btn1);
        ventana.add(btn2);
        ventana.add(btn3);
        ventana.add(btn4);
        ventana.add(btn5);

        ventana.setLayout(new GridLayout(2,10));
        ventana.setVisible(true);
    }
}