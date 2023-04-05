import javax.swing.JOptionPane;

public class Throoow {
    
    public int div(int a, int b) throws Exception {
        if(b == 0) {
            throw new Exception("Division entre 0 >:|");
        }
        return a / b;
    }

    public void funcion() {
        try {
            int res = div(2, 0);
        } catch (Exception e) {
            JOptionPane.showMessageDialog(null, e.getMessage(), "ERROR", JOptionPane.ERROR_MESSAGE);
        }
    }

    public static void main(String[] args) {
        Throoow t = new Throoow();
        t.funcion();
    }

}
