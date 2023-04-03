public class NoVerificada {
    public static void main(String[] args) {
        int a = 1, b = 0;
        try {
            System.out.println("El resultado es: " + (a/b));
        } catch (ArithmeticException e) {
            System.out.println("El resultado es: INFINITO");
        }
        
    }
}
