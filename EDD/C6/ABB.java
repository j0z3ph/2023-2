/**
 * ABB.java
 * Clase Arbol Binario de Busquedas
 * @author Jose Luis
 * GPLv3
 */

public class ABB {
    private Nodo root;

    public ABB() {
        root = null;
    }

    public void insert(int valor) {
        Nodo nodo = new Nodo(valor);
        if(root == null) {
            root = nodo;
        } else {
            insert(root, nodo);
        }
    }

    private void insert(Nodo padre, Nodo nodo) {
        if(nodo.getValor() < padre.getValor()) {
            if(padre.getNodoI() == null) 
                padre.setNodoI(nodo);
            else 
                insert(padre.getNodoI(), nodo);
        } else {
            if(padre.getNodoD() == null) 
                padre.setNodoD(nodo);
            else 
                insert(padre.getNodoD(), nodo);
        }
    }
}
