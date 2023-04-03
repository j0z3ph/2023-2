public class Principal {
    public static void main(String[] args) throws Exception {
        Grafo G = new Grafo();

        G.addVertice("a");
        G.addVertice("b");
        G.addVertice("c");
        G.addVertice("d");
        G.addVertice("e");
        G.addVertice("f");

        G.addArista("a", "b");
        G.addArista("a", "d");
        G.addArista("b", "c");
        G.addArista("b", "e");
        G.addArista("c", "e");
        G.addArista("c", "f");
        G.addArista("d", "b");
        G.addArista("e", "d");

        G.anchura("a");
        System.out.println("");
        G.profundidad("a");
        System.out.println("Holi");
        
    }
}
