public class Principal {
    public static void main(String[] args) {
        ABB abb = new ABB();

        abb.insert(10);
        abb.insertI(5);
        abb.insertI(11);
        abb.insertI(3);
        abb.insertI(20);
        abb.insertI(7);
        abb.insertI(15);
        abb.insertI(1);

        abb.delete(1);
        System.out.println("Holi");
    }
}
