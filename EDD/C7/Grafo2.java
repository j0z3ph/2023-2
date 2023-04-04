import java.util.Hashtable;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.Stack;
import java.util.concurrent.ConcurrentLinkedQueue;

/**
 * Grafo2.java
 * Grafo con listas de adyacencia
 */

public class Grafo2 {
    private Hashtable<String, List<String>> listaAdyacencia;
    private Queue<String> queue;
    private Stack<String> stack;

    public Grafo2() {
        queue = new ConcurrentLinkedQueue<String>();
        stack = new Stack<String>();
        listaAdyacencia = new Hashtable<String, List<String>>();
    }

    public void addVertice(String s) {
        listaAdyacencia.put(s, new LinkedList<String>());
    }

    public void addArista(String o, String d) throws Exception {
        if (!listaAdyacencia.containsKey(o))
            throw new Exception("Vertice no valido.");
        if (!listaAdyacencia.containsKey(d))
            throw new Exception("Vertice no valido.");

        if (!listaAdyacencia.get(o).contains(d))
            listaAdyacencia.get(o).add(d);
    }

    public void anchura(String a) throws Exception {
        List<String> visitados = new LinkedList<String>();
        queue.clear();
        if(!listaAdyacencia.containsKey(a)) throw new Exception("El vertice no existe.");
        queue.add(a);
        while(!queue.isEmpty()) {
            String s = queue.poll();
            System.out.print(s + " ");
            visitados.add(s);
            for (String string : listaAdyacencia.get(s)) {
                if(!visitados.contains(string) && !queue.contains(string)) {
                    queue.add(string);
                }
            }
        }
    }

    public void profundidad(String a) throws Exception {
        List<String> visitados = new LinkedList<String>();
        stack.clear();
        if(!listaAdyacencia.containsKey(a)) throw new Exception("El vertice no existe.");
        stack.add(a);
        while(!stack.isEmpty()) {
            String s = stack.pop();
            System.out.print(s + " ");
            visitados.add(s);
            for (String string : listaAdyacencia.get(s)) {
                if(!visitados.contains(string) && !stack.contains(string)) {
                    stack.add(string);
                }
            }
        }
    }

}
