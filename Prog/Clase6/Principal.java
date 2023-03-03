public class Principal{

    private int valor;
    private int valor2;
    private String msg;

    /*public Principal() {
        this.msg = "";
        this.valor = 0;
        this.valor2 = 0;
    }*/
    public Principal(String msg) {
        this.msg = msg;
        this.valor = 0;
        this.valor2 = 0;
    }



    public void mensaje() {
        
        System.out.println(msg);
    }

    public void mensaje(String msg) {
        System.out.println(msg);
    }

    public int getValor() {
        return valor;
    }
    public int getValor2() {
        return valor2;
    }
    public String getMsg() {
        return msg;
    }

    public void setValor(int val) {
        valor = val;
    }
    //public void setValor2(int valor2) {
    //    this.valor2 = valor2;
    //}

    public void setMsg(String m) {
        this.msg = m;
    }

    public int suma() {
        msg = "Adios";
        return valor + valor2;
    }

}