import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;
import java.util.concurrent.ConcurrentLinkedQueue;

/**
 * Grafo.java
 * Representa un grafo
 * Autor: Jose Luis
 * Fecha: 2023/04/03
 */

public class Grafo {
    private final int INFINITO;
    private List<String> v;
    private int[][] a;
    private Queue<String> queue;
    private Stack<String> stack;

    /**
     * Constructor por defecto
     */
    public Grafo() {
        INFINITO = Integer.MAX_VALUE;
        v = new LinkedList<String>();
        queue = new ConcurrentLinkedQueue<String>();
        stack = new Stack<String>();
    }

    /**
     * Permite agregar un vertice al grafo
     * @param name Nombre del vertice
     */
    public void addVertice(String name) {
        v.add(name);
        a = new int[v.size()][v.size()];
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a[i].length; j++) {
                a[i][j] = INFINITO;
            }
        }
    }

    /**
     * Permite agregar una arista al grafo
     * @param a Vertice origen
     * @param b Vertice destino
     * @throws Exception Si alguno de los vertices no existen
     */
    public void addArista(String a, String b) throws Exception {
        addArista(a, b, 1);
    }

    /**
     * Permite agregar una arista al grafo
     * @param a Vertice origen
     * @param b Vertice destino
     * @param p Peso de la arista
     * @throws Exception Si alguno de los vertices no existen
     */
    public void addArista(String a, String b, int p) throws Exception {
        int idxa = this.v.indexOf(a);
        int idxb = this.v.indexOf(b);
        if(idxa < 0 || idxb < 0) {
            throw new Exception("Vertice no encontrado.");
        }
        this.a[idxa][idxb] = p;
    }

    public void anchura(String a) throws Exception {
        List<String> visitados = new LinkedList<String>();
        queue.clear();
        int idx = v.indexOf(a);
        if(idx < 0) throw new Exception("El vertice no existe.");
        queue.add(a);
        while(!queue.isEmpty()) {
            String s = queue.poll();
            System.out.print(s + " ");
            idx = v.indexOf(s);
            visitados.add(s);
            for (int i = 0; i < this.a.length; i++) {
                if(this.a[idx][i] != INFINITO) {
                    s = v.get(i);
                    if(!visitados.contains(s) && !queue.contains(s)) {
                        queue.add(s);
                    }
                }
            }
        }
    }

    public void profundidad(String a) throws Exception {
        List<String> visitados = new LinkedList<String>();
        stack.clear();
        int idx = v.indexOf(a);
        if(idx < 0) throw new Exception("El vertice no existe.");
        stack.add(a);
        while(!stack.isEmpty()) {
            String s = stack.pop();
            System.out.print(s + " ");
            idx = v.indexOf(s);
            visitados.add(s);
            for (int i = 0; i < this.a.length; i++) {
                if(this.a[idx][i] != INFINITO) {
                    s = v.get(i);
                    if(!visitados.contains(s) && !stack.contains(s)) {
                        stack.add(s);
                    }
                }
            }
        }
    }
}