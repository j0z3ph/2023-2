public class Cola {
    public Nodo head;
    private Nodo tail;
    private int tamanio;
    
    public Cola() {
        head = null;
        tail = null;
        tamanio = 0;
    }

    public int length(){
        return tamanio;
    }

    public void add(int val) {
        Nodo nodo = new Nodo(val);
        if(tail == null) {
            tail = nodo;
            head = nodo;
        } else {
            tail.next = nodo;
            tail = nodo;
        }
        tamanio++;
    }

    public int pull() throws Exception {
        int val = 0;
        if(head == null) {
            tail = null;
            throw new Exception("Cola vacia.");
        } else {
            val = head.val;
            head = head.next;
            System.gc();
        }
        tamanio--;
        return val;
    }

    public boolean isEmpty() {
        return head == null ? true : false;
    }

    public int peek() throws Exception {
        if(head == null) throw new Exception("Cola vacia.");
        return head.val;
    }

    public void vaciar(){
        head = tail = null;
        tamanio = 0;
        System.gc();
    }



}
