import java.io.Serializable;
import java.util.Date;

public class Alumno implements Serializable {

    private String nombre;
    private String boleta;
    private String apellido1;
    private String apellido2;
    private String fnacimiento;
    private double promedio;

    public Alumno(String nombre, String boleta, String apellido1, String apellido2, String fnacimiento, double promedio) {
        this.nombre = nombre;
        this.boleta = boleta;
        this.apellido1 = apellido1;
        this.apellido2 = apellido2;
        this.fnacimiento = fnacimiento;
        this.promedio = promedio;
    }
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    public String getBoleta() {
        return boleta;
    }
    public void setBoleta(String boleta) {
        this.boleta = boleta;
    }
    public String getApellido1() {
        return apellido1;
    }
    public void setApellido1(String apellido1) {
        this.apellido1 = apellido1;
    }
    public String getApellido2() {
        return apellido2;
    }
    public void setApellido2(String apellido2) {
        this.apellido2 = apellido2;
    }
    public String getFnacimiento() {
        return fnacimiento;
    }
    public void setFnacimiento(String fnacimiento) {
        this.fnacimiento = fnacimiento;
    }
    public double getPromedio() {
        return promedio;
    }
    public void setPromedio(double promedio) {
        this.promedio = promedio;
    }
    
}
