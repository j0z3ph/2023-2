/**
 * Lista.java
 * Estructura Lista
 */

public class Lista {
    private Nodo head;
    private Nodo tail;

    /**
     * Constructor por defecto
     */
    public Lista() {
        head = null;
    }

    /**
     * Imprime el contenido de la lista
     */
    public void print() {
        Nodo nodo = head;
        while (nodo != null) {
            System.out.print(nodo.getValue() + " -> ");
            nodo = nodo.getNext();
        }
        System.out.println("NULL");
    }

    /**
     * Encuentra el nodo con el valor indicado
     * @param val Valor a buscar
     * @return El nodo encontrado o NULL si no lo encuentra
     */
    public Nodo find(int val) {
        Nodo current = head;
        while (current != null) {
            if (current.getValue() == val)
                break;
            current = current.getNext();
        }
        return current;
    }

    /**
     * Agrega un nodo al final de la lista
     * @param value Valor del nodo
     */
    public void add(int value) {
        if (head == null) {
            head = new Nodo(value);
            tail = head;
        } else {
            // Nodo last = last();
            tail.setNext(new Nodo(value));
            tail = tail.getNext();
        }
    }

    /**
     * Agrega un nuevo nodo en la posicion indicada
     * @param value El valor del nodo
     * @param idx El indice donde se va a agregar
     * @throws Exception En caso de un indice incorrecto
     */
    public void add(int value, int idx) throws Exception {
        if (idx < 0) {
            throw new Exception("No se permiten indices negativos.");
        }

        if (idx == 0) {
            Nodo nuevo = new Nodo(value);
            nuevo.setNext(head);
            head = nuevo;
        } else {
            Nodo current = head;
            int cont = 1;
            while (current != null) {
                if (cont == idx) {
                    Nodo nuevo = new Nodo(value);
                    nuevo.setNext(current.getNext());
                    current.setNext(nuevo);
                    break;
                }
                cont++;
                current = current.getNext();
            }
            if(current == null) throw new Exception("Se acabo la lista");
        }
    }
}
