
public class Principal {
    public static void main(String[] args) {
        Thread[] hilos = new Thread[10];
        Hilo h = new Hilo();

        for (int i = 0; i < hilos.length; i++) {
            hilos[i] = new Thread(h);
        }
        for (int i = 0; i < hilos.length; i++) {
            hilos[i].start();
        }
    }

}