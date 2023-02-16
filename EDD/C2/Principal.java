package C2;
public class Principal {

    public static void main(String[] args) {
        Alumno al = new Alumno();
        int b = 15;

        cambia(b);

        
        al.edad = 10;
        al.nombre = "Hola";
        cambiaCadena(al);


        System.out.println(al.nombre);
    }

    public static void cambiaCadena(Alumno a){
        a.nombre = "Adios";
    }

    public static void cambia(int a){
        a = 10;
    }

}
