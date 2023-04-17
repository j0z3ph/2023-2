import javax.swing.JOptionPane;

public class Principal {
    public static void main(String[] args) {
        ClaseA objetoA = new ClaseA();
        try {
            objetoA.division(2, 1);
        } catch (MiExepcion e) {
            JOptionPane.showMessageDialog(null, e.getMessage());
        }

        try {
            objetoA.raiz(-1);
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e.getMessage());
        }
        
    }
}
