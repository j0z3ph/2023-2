import clases.Lista;

public class Principal {
    public static void main(String[] args) {
        Lista lista = new Lista();

        lista.registrarEmpleados();
        lista.pasarLista();
        lista.printAsistencia();
    }
}
