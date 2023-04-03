public class Errores {
    public static void main(String[] args) {
        try {
            System.out.println("Holi");
            main(args);
        } catch (Exception ex) {
            System.out.println("Upss, ocurrio un error");
        }
    }
}
