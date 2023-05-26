/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package miprograma;

/**
 *
 * @author j0z3ph
 */
public class TareaPesada extends Thread {
    
    @Override
    public void run() {
        for (int i = 0; i < 100000000; i++) {
            try {
                Thread.sleep(1000);
                System.out.println("Iteracion " + String.valueOf(i));
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
        }
    }
}
