public class Hilo implements Runnable {
    public static int amount = 0;
    @Override
    public void run() {
        synchronized(this) {
            amount++;
            System.out.println(amount);
        }
        
    }


}
