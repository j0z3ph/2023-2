import javax.swing.JButton;
import javax.swing.JFrame;

/**
 * Documentacion
 */

public class MiPrimerVentanita {
    public static void main(String[] args) {
        JFrame ventanita = new JFrame("Ventanita");
        JButton boton = new JButton();
        boton.setSize(100, 100);
        boton.setText("Puchame");
        boton.setLocation(250, 250);

        ventanita.add(boton);
        ventanita.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        ventanita.setSize(600, 600);
        ventanita.setLayout(null);
        ventanita.setVisible(true);
    }
}