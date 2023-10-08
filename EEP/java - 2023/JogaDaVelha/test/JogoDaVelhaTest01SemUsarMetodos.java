package Exercicios.projetos.JogaDaVelha.test;

import java.util.Scanner;
// FALTA OS EMPATES
public class JogoDaVelhaTest01 {
    public static void main(String[] args) {
        int[][] jogoDaVelha=new int[3][3];
        int op=1;
        Scanner input = new Scanner(System.in);
        do{
            for(int i=0;i<jogoDaVelha.length;i++){
                for(int j=0;j<jogoDaVelha[i].length;j++){
                    System.out.print(jogoDaVelha[i][j]+" ");
                }
                System.out.println("");
            }
            //
            System.out.print("Digite a coluna e a linha que voce quer colocar(player 1 = 1):");
            int c1 = input.nextInt();
            int l1= input.nextInt();
            op++;
            if(l1>=jogoDaVelha.length || c1>=jogoDaVelha.length){
                System.out.println("!!!Posicao invalida!!!!!");
                System.out.print("Digite a coluna e a linha que voce quer colocar(player 1 = 1):");
                c1 = input.nextInt();
                l1= input.nextInt();
            }
            if(jogoDaVelha[l1][c1]==0){
                jogoDaVelha[l1][c1]=1;
                op++;
            }else{
                System.out.println("pulou a vez(ja tem numero ai!!!)");
            }
            //
            if(op==9){
                break;
            }
            //Regras para ganhar;
            // linha 2 inteira completa;
            if(jogoDaVelha[2][0]==1 && jogoDaVelha[2][1]==1 && jogoDaVelha[2][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            if(jogoDaVelha[2][0]==2 && jogoDaVelha[2][1]==2 && jogoDaVelha[2][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            // linha 1 inteira completa;
            if(jogoDaVelha[1][0]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[1][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            if(jogoDaVelha[1][0]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[1][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            // linha 0 inteira completa;
            if(jogoDaVelha[0][0]==1 && jogoDaVelha[0][1]==1 && jogoDaVelha[0][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            if(jogoDaVelha[0][0]==2 && jogoDaVelha[0][1]==2 && jogoDaVelha[0][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            //coluna 0 inteira;
            if(jogoDaVelha[0][0]==2 && jogoDaVelha[1][0]==2 && jogoDaVelha[2][0]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][0]==1 && jogoDaVelha[1][0]==1 && jogoDaVelha[2][0]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            //coluna 1 inteira;
            if(jogoDaVelha[0][1]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[2][1]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][1]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[2][1]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            //coluna 2 inteira;
            if(jogoDaVelha[0][2]==2 && jogoDaVelha[1][2]==2 && jogoDaVelha[2][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][2]==1 && jogoDaVelha[1][2]==1 && jogoDaVelha[2][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            //diagonal
            if(jogoDaVelha[1][1]==2 && jogoDaVelha[2][2]==2 && jogoDaVelha[2][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[1][1]==1 && jogoDaVelha[2][2]==1 && jogoDaVelha[2][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            // diagonal invertida
            if(jogoDaVelha[0][2]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[2][0]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][2]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[2][0]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }


            for(int i=0;i<jogoDaVelha.length;i++){
                for(int j=0;j<jogoDaVelha[i].length;j++){
                    System.out.print(jogoDaVelha[i][j]+" ");
                }
                System.out.println("");
            }
            System.out.print("Digite a coluna e a linha que voce quer colocar(player 2 = 2):");
            int c2 = input.nextInt();
            int l2= input.nextInt();
            if(l2>=jogoDaVelha.length || c2>=jogoDaVelha.length){
                System.out.println("!!!!Posicao invalida!!!");
                System.out.print("Digite a coluna e a linha que voce quer colocar(player 2 = 2):");
                c2 = input.nextInt();
                l2= input.nextInt();
            }
            //
            if(jogoDaVelha[l2][c2]==0){
                jogoDaVelha[l2][c2]=2;
                op++;
            }else{
                System.out.println("pulou a vez(ja tem numero ai!!!)");
            }
            //Regras para ganhar;
            // linha 2 inteira completa;
            if(jogoDaVelha[2][0]==1 && jogoDaVelha[2][1]==1 && jogoDaVelha[2][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            if(jogoDaVelha[2][0]==2 && jogoDaVelha[2][1]==2 && jogoDaVelha[2][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            // linha 1 inteira completa;
            if(jogoDaVelha[1][0]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[1][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            if(jogoDaVelha[1][0]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[1][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            // linha 0 inteira completa;
            if(jogoDaVelha[0][0]==1 && jogoDaVelha[0][1]==1 && jogoDaVelha[0][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            if(jogoDaVelha[0][0]==2 && jogoDaVelha[0][1]==2 && jogoDaVelha[0][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            //coluna 0 inteira;
            if(jogoDaVelha[0][0]==2 && jogoDaVelha[1][0]==2 && jogoDaVelha[2][0]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][0]==1 && jogoDaVelha[1][0]==1 && jogoDaVelha[2][0]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            //coluna 1 inteira;
            if(jogoDaVelha[0][1]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[2][1]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][1]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[2][1]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            //coluna 2 inteira;
            if(jogoDaVelha[0][2]==2 && jogoDaVelha[1][2]==2 && jogoDaVelha[2][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][2]==1 && jogoDaVelha[1][2]==1 && jogoDaVelha[2][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            //diagonal
            if(jogoDaVelha[1][1]==2 && jogoDaVelha[2][2]==2 && jogoDaVelha[2][2]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[1][1]==1 && jogoDaVelha[2][2]==1 && jogoDaVelha[2][2]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }
            // diagonal invertida
            if(jogoDaVelha[0][2]==2 && jogoDaVelha[1][1]==2 && jogoDaVelha[2][0]==2){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 2 ganhou!");
                break;
            }
            if(jogoDaVelha[0][2]==1 && jogoDaVelha[1][1]==1 && jogoDaVelha[2][0]==1){
                for(int i=0;i<jogoDaVelha.length;i++){
                    for(int j=0;j<jogoDaVelha[i].length;j++){
                        System.out.print(jogoDaVelha[i][j]+" ");
                    }
                    System.out.println("");
                }
                System.out.println("Player 1 ganhou!");
                break;
            }

        }while(op<=9);
        System.out.println("Deu EMPATE!!!");
    }
}
