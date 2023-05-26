
public class Principal {
    public static void main(String[] args) {
        System.out.println("Inicio");
        tareaPesada();
        System.out.println("Continua");
    }

    public static void tareaPesada() {
        for (int i = 0; i < 100000000; i++) {
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}