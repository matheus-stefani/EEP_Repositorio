package Exercicios.projetos.JogaDaVelha.test;

import Exercicios.projetos.JogaDaVelha.Dominio.JogoDaVelha;

public class JodaVelhaTeste02 {
    public static void main(String[] args) {
        int[][] jogoDaVelha= new int[3][3];
        int op=0;
        do{
            JogoDaVelha.imprimeJogo(jogoDaVelha);
            int perdeu1=JogoDaVelha.jogadaP1(jogoDaVelha);
            if(perdeu1!=0){
                continue;
            }else{
                op++;
            }
            int teste1=JogoDaVelha.testeVencedor(jogoDaVelha);
            if(teste1==1){
                break;
            }
            if(op==9){
                System.out.println("DEU EMPATE!!!");
                break;
            }

            JogoDaVelha.imprimeJogo(jogoDaVelha);
            int perdeu2=JogoDaVelha.jogadaP2(jogoDaVelha);
            if(perdeu2!=0){
                continue;
            }else{
                op++;
            }
            int teste2=JogoDaVelha.testeVencedor(jogoDaVelha);
            if(teste2==1){
                break;
            }
            if(op==9){
                System.out.println("DEU EMPATE!!!");
                break;
            }
        }while(op<=9);

    }
}
