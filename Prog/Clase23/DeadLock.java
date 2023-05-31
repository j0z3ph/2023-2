public class DeadLock {

    public static String t1 = "Hilo 1";
    public static String t2 = "Hilo 2";

    public static void main(String[] args) {
        DeadLock d = new DeadLock();
        Thread h1 = new Thread(new Runnable() {
            @Override
            public void run() {
                d.imprimet1();
            }

        });
        Thread h2 = new Thread(new Runnable() {
            @Override
            public void run() {
                d.imprimet2();
            }

        });
        h1.start();
        h2.start();
    }

    public void imprimet1() {
        synchronized (t1) {
            System.out.println(t1);
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            synchronized (t2) {
                System.out.println(t2);
            }
        }
    }

    public void imprimet2() {
        synchronized (t2) {
            System.out.println(t2);
            try {
                Thread.sleep(100);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            synchronized (t1) {
                System.out.println(t1);
            }
        }
    }
}
