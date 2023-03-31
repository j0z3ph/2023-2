package clases;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
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
    private Scanner scann;

    private final String bdVigilante;
    private final String bdEmpleados;


    public Lista() throws IOException, ClassNotFoundException {
        bdVigilante = "bdvig.bd";
        bdEmpleados = "bdemp.bd";
        fecha = new Date();
        empleados = new LinkedList<Empleado>();
        asistencia = new LinkedList<Empleado>();
        scann =new Scanner(System.in);

        File bd1 = new File(bdVigilante);
        if(!bd1.exists()) {
            bd1.createNewFile();
        } else {
            FileInputStream fis = new FileInputStream(bd1);
            ObjectInputStream ois = new ObjectInputStream(fis);
            vigilante = (Vigilante)ois.readObject();
            ois.close();
            fis.close();
        }

        File bd2 = new File(bdEmpleados);
        if(!bd2.exists()) {
            bd2.createNewFile();
        } else {
            FileInputStream fis = new FileInputStream(bd2);
            ObjectInputStream ois = new ObjectInputStream(fis);
            int n = ois.readInt();
            for (int i = 0; i < n; i++) {
                empleados.add((Empleado)ois.readObject());
            }
            ois.close();
            fis.close();
        }
    }

    private void saveVigilante() throws IOException {
        File bd = new File(bdVigilante);
        if(!bd.exists()) {
            bd.createNewFile();
        }
        FileOutputStream fos = new FileOutputStream(bd);
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        oos.writeObject(vigilante);
        oos.close();
        fos.close();
    }

    private void saveEmpleados() throws IOException {
        File bd = new File(bdEmpleados);
        if(!bd.exists()) {
            bd.createNewFile();
        }
        FileOutputStream fos = new FileOutputStream(bd);
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        oos.writeInt(empleados.size());
        for (Empleado empleado : empleados) {
            oos.writeObject(empleado);
        }
        oos.close();
        fos.close();
    }

    /**
     * Permite registrar un vigilante.
     * @param nombre Nombre completo del vigilante comenzando por apellidos.
     * @param turno Turno del vigilante: Matutino, Vespertino, Nocturno
     * @throws IOException
     */
    public void registrarVigilante(String nombre, Turno turno) throws IOException {
        vigilante = new Vigilante();
        vigilante.setNombre(nombre);
        vigilante.setTurno(turno);
        saveVigilante();
    }
    public void registrarVigilante() throws IOException {
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
        saveVigilante();
    }

    /**
     * Registra un empleado
     * @param nombre Nombre del empleado
     * @param noEmpleado Numero de empleado
     * @param departamento Departamento al que pertenece el empleado
     * @throws IOException
     */
    public void registrarEmpleado(String nombre, int noEmpleado, String departamento) throws IOException {
        Empleado emp = new Empleado();
        emp.setDepartamento(departamento);
        emp.setNoEmpleado(noEmpleado);
        emp.setNombre(nombre);
        empleados.add(emp);
        saveEmpleados();
    }


    public void registrarEmpleados() throws IOException {
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
        saveEmpleados();
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

    public void printAsistencia() throws IOException {
        // Informacion del vigilante
        StringBuilder sb = new StringBuilder();
        sb.append("Lista de Asistencia").append(System.lineSeparator())
        .append("Nombre del Vigilante: " + vigilante.getNombre()).append(System.lineSeparator())
        .append("Turno: " + vigilante.getTurno().name()).append(System.lineSeparator())
        .append("Fecha: " + fecha.toString()).append(System.lineSeparator())
        .append("------------------------------------------").append(System.lineSeparator());
        for (int i = 0; i < asistencia.size(); i++) {
            sb.append((i+1) + ". " + asistencia.get(i).getNombre()).append(System.lineSeparator());
        }
        sb.append("------------------------------------------").append(System.lineSeparator())
        .append("Asistentes: " + asistencia.size()).append(System.lineSeparator());

        System.out.println(sb.toString());
    
        File reporte = new File("rpt_" + System.currentTimeMillis() + ".txt");
        if(!reporte.exists()) reporte.createNewFile();
        FileWriter fw = new FileWriter(reporte);
        fw.write(sb.toString());
        fw.close();
    }

    public void printEmpleados() {

    }

}
