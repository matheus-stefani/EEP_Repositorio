package Exercicios.projetos.Calculdora.dominio;

public class Calculadora {

    public static void soma(double n1, double n2){
        System.out.println("A soma é:"+(n1+n2));
    }
    public static void sub(double n1, double n2){
        System.out.println("A sub é:"+(n1-n2));
    }
    public static void div(double n1, double n2)throws ArithmeticException{
        if(n2==0){
            throw new ArithmeticException("Não existe divisão por zero");
        }
        System.out.println("A divisão é:"+(n1/n2));
    }
    public static void multi(double n1, double n2){
        System.out.println("A multiplição é:"+(n1*n2));
    }
}
