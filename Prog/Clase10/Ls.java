import java.io.File;
import java.io.IOException;

public class Ls {
    public static void main(String[] args) throws IOException {
        String ruta = String.join(File.separator, "archivos","otra", "carpeta");
        String[] files;
        boolean details = false;
        File archivo = new File(ruta);
        for (String arg : args) {
            if (arg.equals("-l")) {
                details = true;
            }
        }
        if (archivo.isDirectory()) {
            files = archivo.list();
            for (String file : files) {
                File a = new File(file);
                if (details) {
                    System.out.println(file + "\t" + (a.isDirectory() ? "DIR" : "") + "\t" + 
                            (!a.isDirectory() ? a.length() : ""));
                } else
                    System.out.println(file);
            }
        } else {
            if (archivo.exists()) {
                System.out.println(archivo.getAbsolutePath() + archivo.getName());
            }
        }
    }
}
