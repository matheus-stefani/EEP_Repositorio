package Exercicios.projetos.Forca.dominio;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.List;
import java.util.Random;
import java.util.Scanner;

public class JogoForcaMetodos {
    private static Scanner input = new Scanner(System.in);

    public static String nomeJogo(){
        File file = new File("C:\\Users\\dumas\\IdeaProjects\\JAVA\\arquivo.txt");
        try(FileReader fileReader = new FileReader(file);
            BufferedReader br = new BufferedReader(fileReader)){
            Random random = new Random();
            int min=1;
            int max=10;
            int i1 = random.nextInt(max - min) + min;

            for(int i = 0 ; i<i1; i++){
                br.readLine();
            }
            return br.readLine();
        }catch (IOException e){
            e.printStackTrace();
        }
        return null;
    }

    public static char[] colocandoTracos(char[] tracos, int tam) {
        for (int i = 0; i < tam; i++) {
            tracos[i] = '_';
        }
        return tracos;
    }

    public static void imprimeJogo(char[] tracos, int tam) {
        for (int i = 0; i < tam; i++) {
            System.out.print(tracos[i]);
        }
        System.out.println();
    }

    public static int testeLetraExiste(char[] tracos, int tam, Character letraUsuario, char[] repostaQuebrada, List<Character> letrasHistorico, char[] fake) {
        int testeLetra = 0;
        for (int x = 0; x < tam; x++) {
            if (repostaQuebrada[x] == letraUsuario && !letrasHistorico.contains(letraUsuario)) {
                tracos[x] = fake[x];
                testeLetra++;
            }
        }
        return testeLetra;
    }

    public static char letraUsuario() {
        System.out.println("Digite uma letra");
        return input.next().toLowerCase().charAt(0);

    }

    public static int testePerdeu(Integer tentativa) {
        if (tentativa == 0) {
            System.out.println("");
            System.out.println("Perdeu o jogo!!!");
            return 1;
        }
        return 0;
    }

    public static void imprimeLetraHistorico(List<Character> letrasHistorico) {
        System.out.print("Letras que ja foram:");
        for (Character letraHistorico : letrasHistorico) {
            System.out.print(letraHistorico + " ");

        }
        System.out.println("");
    }
    public static int testeAcerto(int acerto, int tam){
        if(acerto == tam){
            System.out.println("");
            System.out.println("Parabens voce acertou a palavra!!!");
            return 1;
        }
        return 0;
    }
}