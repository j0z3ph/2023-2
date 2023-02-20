public class Lista {
    private Nodo head;
    public Lista() {
        head = null;
    }

    public void print() {
        Nodo nodo = head;
        while(nodo !=null) {
            System.out.print(nodo.getValue() + " -> ");
            nodo = nodo.getNext();
        }
        System.out.print("NULL");
    }

    private Nodo last(){
        Nodo current = head;
        while(current !=null && current.getNext() != null) {
            current = current.getNext();
        }
        return current;
    }

    public void add(int value) {
        if(head == null) {
            head = new Nodo(value);
        } else {
            Nodo last = last();
            last.setNext(new Nodo(value));
        }
    }
}
