package C2;

public class Alumno {
    int boleta;
    int edad;
    String nombre;

    /**
     * Pone la edad
     * @param e
     */
    public void setEdad(int e) {
        if (e < 18 || e > 100) {
            this.edad = 0;
            System.out.println("ERROR");
        } else this.edad = e;
    }
}
