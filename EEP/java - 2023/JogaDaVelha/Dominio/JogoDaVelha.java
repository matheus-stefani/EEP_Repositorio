package Exercicios.projetos.JogaDaVelha.Dominio;

import java.util.Scanner;

public class JogoDaVelha {

    public static void imprimeJogo(int[][] jogoDaVelha){
        for(int i=0; i<jogoDaVelha.length;i++){
            for (int j=0; j<jogoDaVelha[i].length;j++){
                System.out.print(jogoDaVelha[i][j]+" ");
            }
            System.out.println("");
        }
    }
    public static int jogadaP1(int[][] jogoDaVelha){
        Scanner input = new Scanner(System.in);
        System.out.print("Digite a linha e a coluna(Player1):");
        int l = input.nextInt();
        int c = input.nextInt();
        if(l>=jogoDaVelha.length || c>=jogoDaVelha.length){
            System.out.println("Posição não existe!");
            System.out.print("Digite a linha e a coluna(Player1):");
            l = input.nextInt();
            c = input.nextInt();
            jogoDaVelha[l][c]=1;
            return 0;
        }
        if(jogoDaVelha[l][c]==0){
            jogoDaVelha[l][c]=1;
            return 0;
        }else{
            System.out.println("Ja existe um numero nessa linha e coluna!!!");
            return 1;
        }

    }
    public static int jogadaP2(int[][] jogoDaVelha){
        Scanner input = new Scanner(System.in);
        System.out.print("Digite a linha e a coluna(Player2):");
        int l = input.nextInt();
        int c = input.nextInt();
        if(l>=jogoDaVelha.length || c>=jogoDaVelha.length){
            System.out.println("Posição não existe!");
            System.out.print("Digite a linha e a coluna(Player2):");
            l = input.nextInt();
            c = input.nextInt();
            jogoDaVelha[l][c]=2;
            return 0;
        }
        if(jogoDaVelha[l][c]==0){
            jogoDaVelha[l][c]=2;
            return 0;
        }else{
            System.out.println("Ja existe um numero nessa linha e coluna(PERDEU SUA VEZ DE JOGAR)");
            return 1;
        }
    }
    public static int testeVencedor(int[][] jogoDaVelha){
        // linha 2 inteira completa;
        if(jogoDaVelha[2][0]==1 && jogoDaVelha[2][1]==1 && jogoDaVelha[2][2]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        if(jogoDaVelha[2][0]==2 && jogoDaVelha[2][1]==2 && jogoDaVelha[2][2]==2){
            for(int i=0;i<jogoDaVelha.length;i++){
                for(int j=0;j<jogoDaVelha[i].length;j++){
                    System.out.print(jogoDaVelha[i][j]+" ");
                }
                System.out.println("");
            }
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        // linha 1 inteira completa;
        if(jogoDaVelha[1][0]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[1][2]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        if(jogoDaVelha[1][0]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[1][2]==2){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        // linha 0 inteira completa;
        if(jogoDaVelha[0][0]==1 && jogoDaVelha[0][1]==1 && jogoDaVelha[0][2]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        if(jogoDaVelha[0][0]==2 && jogoDaVelha[0][1]==2 && jogoDaVelha[0][2]==2){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        //coluna 0 inteira;
        if(jogoDaVelha[0][0]==2 && jogoDaVelha[1][0]==2 && jogoDaVelha[2][0]==2){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        if(jogoDaVelha[0][0]==1 && jogoDaVelha[1][0]==1 && jogoDaVelha[2][0]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        //coluna 1 inteira;
        if(jogoDaVelha[0][1]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[2][1]==2){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        if(jogoDaVelha[0][1]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[2][1]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        //coluna 2 inteira;
        if(jogoDaVelha[0][2]==2 && jogoDaVelha[1][2]==2 && jogoDaVelha[2][2]==2){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        if(jogoDaVelha[0][2]==1 && jogoDaVelha[1][2]==1 && jogoDaVelha[2][2]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        //diagonal
        if(jogoDaVelha[0][0]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[2][2]==2){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        if(jogoDaVelha[0][0]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[2][2]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        // diagonal invertida
        if(jogoDaVelha[0][2]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[2][0]==2){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 2 ganhou!");
            return 1;
        }
        if(jogoDaVelha[0][2]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[2][0]==1){
            imprimeJogo(jogoDaVelha);
            System.out.println("Player 1 ganhou!");
            return 1;
        }
        return 0;
    }
}
