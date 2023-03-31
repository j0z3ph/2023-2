import java.io.IOException;
import java.util.Scanner;

import clases.Lista;

public class Principal {
    public static void main(String[] args) throws IOException, ClassNotFoundException {
        Lista lista = new Lista();
        Scanner scann = new Scanner(System.in);
        int opcion = 0;
        while (opcion != 5) {
            System.out.println("Menu");
            System.out.println("\t1. Registrar vigilante");
            System.out.println("\t2. Registrar empleados");
            System.out.println("\t3. Pasar asistencia");
            System.out.println("\t4. Ver asistencia");
            System.out.println("\t5. Salir");
            System.out.print("Seleccione una opcion: ");
            opcion = scann.nextInt();
            scann.nextLine();

            switch (opcion) {
                case 1:
                    lista.registrarVigilante();
                    break;
                case 2:
                    lista.registrarEmpleados();
                    break;
                case 3:
                    lista.pasarLista();
                    break;
                case 4:
                    lista.printAsistencia();
                    break;
                case 5:
                    break;
                default:
                    System.out.println("Opcion no valida.");
            }
        }
        scann.close();
    }
}
