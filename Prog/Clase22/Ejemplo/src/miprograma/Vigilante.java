package miprograma;

import java.io.Serializable;

public class Vigilante implements Serializable{
    private String nombre;
    private Turno turno;

    public Turno getTurno() {
        return turno;
    }
    public void setTurno(Turno turno) {
        this.turno = turno;
    }
    public String getNombre() {
        return nombre;
    }
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }
    
    
}
