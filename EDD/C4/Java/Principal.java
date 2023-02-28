public class Principal {
    public static void main(String[] args) {
        Cola cola = new Cola();

        cola.add(1);
        cola.add(2);
        cola.add(3);
        cola.add(4);

        try {
            cola.pull();
            cola.pull();
            cola.pull();
            cola.pull();
            cola.pull();
            cola.pull();
        } catch (Exception e) {
            System.out.println(e.getLocalizedMessage());
        }

        
    }
}
