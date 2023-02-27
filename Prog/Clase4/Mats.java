/**
 * Mats.java
 * Calculo de matriz inversa 
 * @author Jose Luis Cruz
 * 2023/02/27
 * GPLv3
 */
import java.util.Arrays;
import java.util.Random;

public class Mats {
    /**
     * Funcion principal
     * @param args
     */
    public static void main(String[] args) {
        int[][] matrix = new int[3][3];
        double[][] inversa = new double[3][3];
        Random rnd = new Random();
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                matrix[i][j] = rnd.nextInt(100);
            }
        }
        print(matrix);
        inversa = inversa(matrix);
        print(inversa);
    }

    public static double[][] inversa(int[][] m) {
        int det;
        int[][] tras = new int[3][3];
        int[][] adj = new int[3][3];
        double factor;
        double[][] inv = new double[3][3];
        

        det = determinante(m);
        if(det == 0) {
            System.out.println("La matriz no tiene inversa.");
        } else {
            tras = traspuesta(m);
            adj = adjunta(tras);
            factor = 1.0/(double)det;
            for (int i = 0; i < adj.length; i++) {
                for (int j = 0; j < adj[i].length; j++) {
                    inv[i][j] = (double)adj[i][j]*factor;
                }
            }
        }
        return inv;
    }

    public static int[][] adjunta(int[][] m) {
        int[][] adj = new int[3][3];
        adj[0][0] = (+1) * ((m[1][1] * m[2][2]) - (m[2][1] * m[1][2]));
        adj[0][1] = (-1) * ((m[1][0] * m[2][2]) - (m[2][0] * m[1][2]));
        adj[0][2] = (+1) * ((m[1][0] * m[2][1]) - (m[2][0] * m[1][1]));
        adj[1][0] = (-1) * ((m[0][1] * m[2][2]) - (m[2][1] * m[0][2]));
        adj[1][1] = (+1) * ((m[0][0] * m[2][2]) - (m[2][0] * m[0][2]));
        adj[1][2] = (-1) * ((m[1][0] * m[2][1]) - (m[2][0] * m[0][1]));
        adj[2][0] = (+1) * ((m[0][1] * m[1][2]) - (m[1][1] * m[0][2]));
        adj[2][1] = (-1) * ((m[0][0] * m[1][2]) - (m[1][0] * m[0][2]));
        adj[2][2] = (+1) * ((m[0][0] * m[1][1]) - (m[1][0] * m[0][1]));

        return adj;
    }

    public static int determinante(int[][] m) {
        int det = 0;
        det = m[0][0] * m[1][1] * m[2][2] +
                m[1][0] * m[2][1] * m[0][2] +
                m[2][0] * m[0][1] * m[1][2] -
                m[2][0] * m[1][1] * m[0][2] -
                m[0][0] * m[2][1] * m[1][2] -
                m[1][0] * m[0][1] * m[2][2];
        return det;
    }

    public static int[][] traspuesta(int[][] m) {
        int[][] tras = new int[3][3];
        for (int i = 0; i < tras.length; i++) {
            for (int j = 0; j < tras[i].length; j++) {
                tras[j][i] = m[i][j];
            }
        }
        return tras;
    }

    public static void print(int[][] m) {
        for (int[] row : m) {
            System.out.println(Arrays.toString(row));
        }
    }
    public static void print(double[][] m) {
        for (double[] row : m) {
            System.out.println(Arrays.toString(row));
        }
    }
}
