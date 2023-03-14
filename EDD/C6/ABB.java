/**
 * ABB.java
 * Clase Arbol Binario de Busquedas
 * 
 * @author Jose Luis
 *         GPLv3
 *         2023-03-14
 */

public class ABB {
    private Nodo odin;

    public ABB() {
        odin = null;
    }

    /**
     * Inserta un nuevo nodo en el arbol
     * 
     * @param valor El valor que va a tener el nodo
     */
    public void insert(int valor) {
        Nodo nodo = new Nodo(valor);
        if (odin == null) {
            odin = nodo;
        } else {
            insert(odin, nodo);
        }
    }

    /**
     * 
     * @param padre
     * @param nodo
     */
    private void insert(Nodo padre, Nodo nodo) {
        if (nodo.getValor() < padre.getValor()) {
            if (padre.getNodoI() == null) {
                padre.setNodoI(nodo);
                nodo.setPadre(padre);
            } else
                insert(padre.getNodoI(), nodo);
        } else {
            if (padre.getNodoD() == null) {
                padre.setNodoD(nodo);
                nodo.setPadre(padre);
            } else
                insert(padre.getNodoD(), nodo);
        }
    }

    /**
     * 
     * @param valor
     */
    public void insertI(int valor) {
        Nodo nodo = new Nodo(valor);
        if (odin == null) {
            odin = nodo;
        } else {
            Nodo padre = odin;
            boolean inserted = false;
            while (!inserted) {
                if (nodo.getValor() < padre.getValor()) {
                    if (padre.getNodoI() == null) {
                        padre.setNodoI(nodo);
                        nodo.setPadre(padre);
                        inserted = true;
                    } else
                        padre = padre.getNodoI();
                } else {
                    if (padre.getNodoD() == null) {
                        padre.setNodoD(nodo);
                        nodo.setPadre(padre);
                        inserted = true;
                    } else
                        padre = padre.getNodoD();
                }
            }
        }
    }

    public Nodo find(int valor) {
        Nodo nodo = odin;
        boolean found = false;
        while (!found && nodo != null) {
            if (nodo.getValor() == valor) {
                found = true;
            } else if (valor < nodo.getValor()) {
                nodo = nodo.getNodoI();
            } else {
                nodo = nodo.getNodoD();
            }
        }
        return nodo;
    }

    public void delete(int valor) {
        Nodo nodo = find(valor);
        Nodo padre;
        if (nodo != null) {
            // Caso 1: Nodo hoja
            if (nodo.getNodoD() == null && nodo.getNodoI() == null) {
                if (nodo.getPadre() == null) {
                    odin = null;
                } else {
                    padre = nodo.getPadre();
                    if (padre.getNodoI() == nodo) {
                        padre.setNodoI(null);
                    } else {
                        padre.setNodoD(null);
                    }
                    nodo.setPadre(null);
                }
            } else if (nodo.getNodoD() == null || nodo.getNodoI() == null) {
                if (nodo.getNodoI() != null) {
                    if (nodo.getPadre() == null) {
                        if (nodo.getNodoI() != null) {
                            odin = nodo.getNodoI();
                            nodo.setNodoI(null);
                        } else {
                            odin = nodo.getNodoD();
                            nodo.setNodoD(null);
                        }
                    } else {
                        padre = nodo.getPadre();
                        if (padre.getNodoI() == nodo) {
                            padre.setNodoI(nodo.getNodoI());
                            padre.getNodoI().setPadre(padre);
                        } else {
                            padre.setNodoD(nodo.getNodoI());
                            padre.getNodoD().setPadre(padre);
                        }
                        nodo.setNodoI(null);
                        nodo.setPadre(null);
                    }
                }
            }
        }
    }
}
