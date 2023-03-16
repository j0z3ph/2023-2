/**
 * Nodo.java
 * Nodo
 * @author Jose Luis
 * 2023/03/7
 * GPLv3
 */

 public final class Nodo {
    private int valor;
    private int cantidad;
    public int getCantidad() {
        return cantidad;
    }

    public void setCantidad(int cantidad) {
        this.cantidad = cantidad;
    }

    private Nodo izquierdo;
    private Nodo derecho;
    private Nodo padre;

    /**
     * Constructor de la clase
     * @param valor Valor del nodo
     */
    public Nodo(int valor) {
        this.valor = valor;
        this.cantidad = 1;
        this.izquierdo = this.derecho = this.padre = null;
    }

    /**
     * Regresa el valor del nodo
     * @return Valor
     */
    public int getValor() {
        return valor;
    }    

    /**
     * Regresa el nodo izquierdo
     * @return Nodo
     */
    public Nodo getNodoI() {
        return izquierdo;
    }

    /**
     * Regresa el nodo derecho
     * @return Nodo
     */
    public Nodo getNodoD() {
        return derecho;
    }

    public Nodo getPadre() {
        return padre;
    }

    /**
     * Asigna el nodo izquierdo
     * @param i Nodo
     */
    public void setNodoI(Nodo i) {
        izquierdo = i;
    }

    /**
     * Asigna el nodo derecho
     * @param d Nodo
     */
    public void setNodoD(Nodo d) {
        derecho = d;
    }

    public void setPadre(Nodo p) {
        padre = p;
    }

    public void setValor(int v) {
        valor = v;
    }

 }