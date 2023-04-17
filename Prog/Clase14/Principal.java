import javax.swing.JOptionPane;

public class Principal {
    public static void main(String[] args) {
        int numA, numB, res;

        String input = JOptionPane.showInputDialog(null, "Proporcione el valor A", "Numero A", JOptionPane.QUESTION_MESSAGE);

        if(input == null) {
            JOptionPane.showMessageDialog(null, "No seas tonto, se necesitan valores para operar.", "ERROR >:(", JOptionPane.ERROR_MESSAGE);
        } else {
            try {
                numA = Integer.parseInt(input);
                input = JOptionPane.showInputDialog(null, "Proporcione el valor B", "Numero B", JOptionPane.QUESTION_MESSAGE);
                if(input == null) {
                    JOptionPane.showMessageDialog(null, "No seas tonto, se necesitan valores para operar.", "ERROR >:(", JOptionPane.ERROR_MESSAGE);
                } else {
                    try {
                        numB = Integer.parseInt(input);
                        res = numA + numB;
                        JOptionPane.showMessageDialog(null, "La suma es: " + res, "Resultado :D", JOptionPane.PLAIN_MESSAGE);    
                    } catch (Exception e) {
                        JOptionPane.showMessageDialog(null, "No seas tonto, solo se aceptan valores numericos enteros.", "ERROR >:(", JOptionPane.ERROR_MESSAGE);
                    }   
                }
            } catch (Exception e) {
                JOptionPane.showMessageDialog(null, "No seas tonto, solo se aceptan valores numericos enteros.", "ERROR >:(", JOptionPane.ERROR_MESSAGE);
            }   
        }
    }
}