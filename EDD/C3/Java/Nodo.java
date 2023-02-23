/**
 * Nodo.java
 * Clase nodo
 */
public class Nodo {
    private int value;
    private Nodo next;

    /**
     * Constructor por defecto
     * @param value Valor del nodo
     */
    public Nodo(int value) {
        this.value = value;
        this.next = null;
    }

    /**
     * Get Value
     * @return Valor
     */
    public int getValue() {
        return this.value;
    }

    /**
     * Get next nodo
     * @return Nodo
     */
    public Nodo getNext() {
        return this.next;
    }

    /**
     * Asigna un valor al nodo
     * @param val Valor del nodo
     */
    public void setValue(int val) {
        this.value = val;
    }

    /**
     * Asigna un valor al siguiente nodo
     * @param n Referencia del siguiente nodo
     */
    public void setNext(Nodo n) {
        this.next = n;
    }

}