package miprograma;

import java.io.Serializable;

public class Empleado implements Serializable{
    private String nombre;
    private int noEmpleado;
    private String departamento;

    
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public int getNoEmpleado() {
        return noEmpleado;
    }
    public void setNoEmpleado(int noEmpleado) {
        this.noEmpleado = noEmpleado;
    }
    public String getDepartamento() {
        return departamento;
    }
    public void setDepartamento(String departamento) {
        this.departamento = departamento;
    }
    
}
