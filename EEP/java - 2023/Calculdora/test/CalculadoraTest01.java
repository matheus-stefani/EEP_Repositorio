package Exercicios.projetos.Calculdora.test;

import Exercicios.projetos.Calculdora.dominio.Calculadora;

import java.util.Scanner;

public class CalculadoraTest01 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Digite o primeiro numero:");
        int n1 = input.nextInt();
        System.out.print("Digite o segundo numero:");
        int n2 = input.nextInt();

        System.out.println("Menu:");
        System.out.println("1-Soma");
        System.out.println("2-Sub");
        System.out.println("3-Div");
        System.out.println("4-Multiplicação");
        int op = input.nextInt();
        switch(op){
            case 1:
                Calculadora.soma(n1,n2);
                break;
            case 2:
                Calculadora.sub(n1,n2);
                break;
            case 3:
                try{
                    Calculadora.div(n1,n2);
                }catch (ArithmeticException e){
                    e.printStackTrace();
                    System.out.print("Digite o segundo numero novamente (sem ser zero):");
                    int n2novo = input.nextInt();
                    Calculadora.div(n1,n2novo);
                }
                break;
            case 4:
                Calculadora.multi(n1,n2);
                break;
            default:
                System.out.println("Opção invalida!");
        }

    }
}
