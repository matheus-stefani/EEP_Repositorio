package Exercicios.projetos.Forca.test;

import Exercicios.projetos.Forca.dominio.JogoForcaMetodos;


import java.util.ArrayList;
import java.util.List;


public class ForcaTest01 {
    public static void main(String[] args) {
        String nome =JogoForcaMetodos.nomeJogo();
        String resposta = nome.toLowerCase();
        int testePerdeu;
        int acerto=0;
        int testeGanhou =0;
        List<Character> letrasHistorico = new ArrayList<>();
        Integer tentativa = 10;
        char[] repostaQuebrada =resposta.toCharArray();
        char[] fake = nome.toCharArray();
        char[] tracos = new char[repostaQuebrada.length];
        char[] tracosColocados = JogoForcaMetodos.colocandoTracos(tracos, repostaQuebrada.length);
        JogoForcaMetodos.imprimeJogo(tracos, repostaQuebrada.length);
        do {
            char letraUsuario = JogoForcaMetodos.letraUsuario();
            int testeLetra = JogoForcaMetodos.testeLetraExiste(tracosColocados, repostaQuebrada.length, letraUsuario, repostaQuebrada, letrasHistorico,fake);
            letrasHistorico.add(letraUsuario);
            JogoForcaMetodos.imprimeLetraHistorico(letrasHistorico);
            for(int i = 0 ; i<testeLetra;i++) if(testeLetra >= 1) acerto++;
            if (testeLetra == 0) tentativa--;
            System.out.println("Tentativas:" + tentativa);
            JogoForcaMetodos.imprimeJogo(tracos, repostaQuebrada.length);
            testePerdeu = JogoForcaMetodos.testePerdeu(tentativa);
            testeGanhou = JogoForcaMetodos.testeAcerto(acerto,repostaQuebrada.length);
            if(testeGanhou == 1)break;
        } while (testePerdeu != 1);

    }
}
