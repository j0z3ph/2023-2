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
                if (nodo.getValor() == padre.getValor()) {
                    padre.setCantidad(padre.getCantidad() + 1);
                    inserted = true;
                } else if (nodo.getValor() < padre.getValor()) {
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
        Nodo min;
        if (nodo != null) {
            if (nodo.getCantidad() > 1) {
                nodo.setCantidad(nodo.getCantidad() - 1);
                return;
            }
            // Caso 3
            if (nodo.getNodoD() != null && nodo.getNodoI() != null) {
                min = nodo.getNodoD();
                while (min.getNodoI() != null) {
                    min = min.getNodoI();
                }
                nodo.setValor(min.getValor());
                nodo = min;
            }

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
            } // Caso 2
            else if (nodo.getNodoD() == null || nodo.getNodoI() == null) {
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
                        padre.setNodoI(nodo.getNodoI() != null ? nodo.getNodoI() : nodo.getNodoD());
                        padre.getNodoI().setPadre(padre);
                    } else {
                        padre.setNodoD(nodo.getNodoI() != null ? nodo.getNodoI() : nodo.getNodoD());
                        padre.getNodoD().setPadre(padre);
                    }
                    nodo.setNodoI(null);
                    nodo.setNodoD(null);
                    nodo.setPadre(null);
                }

            }
        }
    }

    public void inorden() {
        inorden(odin);
        System.out.println();
    }

    private void inorden(Nodo nodo) {

        if (nodo != null) {
            inorden(nodo.getNodoI());
            for (int cont = 1; cont <= nodo.getCantidad(); cont++)
                System.out.print(nodo.getValor() + ", ");
            inorden(nodo.getNodoD());
        }
    }

    public void preorden() {
        preorden(odin);
        System.out.println();
    }

    private void preorden(Nodo nodo) {
        if (nodo != null) {
            for (int cont = 1; cont <= nodo.getCantidad(); cont++)
                System.out.print(nodo.getValor() + ", ");
            preorden(nodo.getNodoI());
            preorden(nodo.getNodoD());
        }
    }

    public void posorden() {
        posorden(odin);
        System.out.println();
    }

    private void posorden(Nodo nodo) {
        if (nodo != null) {
            posorden(nodo.getNodoI());
            posorden(nodo.getNodoD());
            for (int cont = 1; cont <= nodo.getCantidad(); cont++)
                System.out.print(nodo.getValor() + ", ");
        }
    }
}
