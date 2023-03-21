import java.util.Arrays;
import java.util.Random;

public class Principal {
    public static void main(String[] args) {
        final int MAX = 100000;
        ABB abb = new ABB();
        int[] arr = new int[MAX];
        Random rnd = new Random();
        int lost;
        boolean found1 = false, found2 = false;
        long t1, t2, et1, et2;
        
        System.out.println("Generando...");
        for (int i = 0; i < MAX; i++) {
            //arr[i] = rnd.nextInt(MAX * 2) - MAX;
            arr[i] = i;
            abb.insertI(arr[i]);
        }

        //System.out.println(Arrays.toString(arr));
        //abb.inorden();
        lost = rnd.nextInt(MAX * 2) - MAX;

        System.out.println("Buscando...");
        t1 = System.nanoTime();
        for (int i = 0; i < MAX; i++) {
            if(arr[i] == lost) {
                found1 = true;
                break;
            }
        }
        t2 = System.nanoTime();
        et1 = t2 - t1;

        t1 = System.nanoTime();
        found2 = abb.find(lost) == null ? false : true;
        t2 = System.nanoTime();
        et2 = t2 - t1;

        System.out.println("Busqueda arreglo: " + et1*1E-6 + ", Resultado: " + found1);
        System.out.println("Busqueda ABB: " + et2*1E-6 + ", Resultado: " + found2);

    }
}
