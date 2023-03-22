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
    Scanner scann;

    public Lista() {
        fecha = new Date();
        empleados = new LinkedList<Empleado>();
        asistencia = new LinkedList<Empleado>();
        scann =new Scanner(System.in);
    }

    /**
     * Permite registrar un vigilante.
     * @param nombre Nombre completo del vigilante comenzando por apellidos.
     * @param turno Turno del vigilante: Matutino, Vespertino, Nocturno
     */
    public void registrarVigilante(String nombre, Turno turno) {
        vigilante = new Vigilante();
        vigilante.setNombre(nombre);
        vigilante.setTurno(turno);
    }
    public void registrarVigilante() {
        String nombre;
        Turno turno;
        System.out.print("Nombre del vigilante: ");
        nombre = scann.nextLine();
        System.out.println("Indique el turno: ");
        for (Turno t : Turno.values()) {
            System.out.println(t.ordinal() + " - " + t.name());
        }
        int ord = scann.nextInt();
        scann.nextLine();
        turno = Turno.values()[ord];
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
        while(!r.toLowerCase().startsWith("n")) {
            System.out.print("Proporcione el nombre: ");
            nombre = scann.nextLine();
            System.out.print("Proporcione el numero de empleado: ");
            noEmp = scann.nextInt();
            scann.nextLine();
            System.out.print("Proporcione el departamento: ");
            depto = scann.nextLine();
            Empleado emp = new Empleado();
            emp.setNombre(nombre);
            emp.setNoEmpleado(noEmp);
            emp.setDepartamento(depto);
            empleados.add(emp);
            System.out.print("Desea agregar otro?[s/n] ");
            r = scann.nextLine();
        }
    }

    public void pasarLista() {
        String resp;
        for (Empleado empleado : empleados) {
            System.out.printf("%s asistio? [s/n]", empleado.getNombre().toUpperCase());
            resp = scann.nextLine();
            if(resp.toLowerCase().startsWith("s")) {
                asistencia.add(empleado);
            }
        }
    }

    public void printAsistencia() {
        for (int i = 0; i < asistencia.size(); i++) {
            System.out.printf("%d - %s\n", i+1, asistencia.get(i).getNombre());
        }
    }

    public void printEmpleados() {

    }

}
