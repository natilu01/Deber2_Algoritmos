/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package cnt;

import java.util.Scanner;

/**
 *
 * @author USUARIO
 */
public class Cnt {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner entrada=new Scanner(System.in);
        float minutos;
        float pago1,pago2,pago3,pago4;
        
        System.out.println("Programa para calcular el valor a pagar por el consumo de telefonia movil");
        System.out.println("Por favor ingrese el valor de los minutos consumidos");
        minutos =entrada.nextFloat();
        
        if (minutos<6){
            pago1=minutos*1;
	    System.out.println("El total a pagar es: "+pago1);
        }
        else if (minutos>4&&minutos<8){
            pago2=(float) (minutos*0.80);
            System.out.println("El total a pagar es: "+pago2);
        }
        else if (minutos>7&&minutos<10){
            pago3=(float) (minutos*0.70);
            System.out.println("El total a pagar es: "+pago3);
        }
        else if (minutos>9){
            pago4=(float) (minutos*0.50);
            System.out.println("El total a pagar es: "+pago4);
        }
        else {
            System.out.println("GRACIAS");
        }
    }
    
}
