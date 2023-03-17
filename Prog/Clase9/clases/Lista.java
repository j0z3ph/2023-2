package clases;

import java.util.ArrayList;
import java.util.Date;
import java.util.LinkedList;
import java.util.List;
import java.util.Scanner;

public class Lista {
    private Vigilante vigilante;
    private Date fecha;
    private List<Empleado> empleados;
    private List<Empleado> asistencia;

    public Lista() {
        fecha = new Date();
        empleados = new LinkedList<Empleado>();
        asistencia = new LinkedList<Empleado>();
    }

    /**
     * Permite registrar un vigilante.
     * @param nombre Nombre completo del vigilante comenzando por apellidos.
     * @param turno Turno del vigilante: Matutino, Vespertino, Nocturno
     */
    public void registrarVigilante(String nombre, String turno) {
        vigilante = new Vigilante();
        vigilante.setNombre(nombre);
        vigilante.setTurno(turno);
    }

    /**
     * Registra un empleado
     * @param nombre Nombre del empleado
     * @param noEmpleado Numero de empleado
     * @param departamento Departamento al que pertenece el empleado
     */
    public void registrarEmpleado(String nombre, int noEmpleado, String departamento) {
        Empleado emp = new Empleado();
        emp.setDepartamento(departamento);
        emp.setNoEmpleado(noEmpleado);
        emp.setNombre(nombre);
        empleados.add(emp);
    }


    public void registrarEmpleados() {
        String r = "";
        String nombre, depto;
        int noEmp;
        Scanner scann = new Scanner(System.in);
        while(!r.toLowerCase().startsWith("n")) {
            System.out.print("Proporcione el nombre: ");
            nombre = scann.nextLine();
            System.out.print("Proporcione el numero de empleado: ");
            noEmp = scann.nextInt();
            scann.nextLine();
            System.out.print("Proporcione el departamento: ");
            depto = scann.nextLine();
            // TODO completar el agregado de empleados interactivo
        }

    }
}
