#include <stdio.h>
#include <stdlib.h>
/*
Professor, acabei criando outra struct.

resultadoDaSoma: Criei porque estava salvando o valor da soma no campo peso.
Assim, quando chegava no vetor cell[2], eu acabava perdendo o valor do primeiro z.

maisDeDois: Criei porque, quando tinha mais de dois caracteres consecutivos,
eu acabava somando o mesmo caracter duas vezes.
*/

typedef struct {
    char car;
    int peso;
}Cell;

typedef struct {
    char car;
    int peso;
    int resultadoDaSoma;
    int maisDeDois;
}CellSoma;



CellSoma somaSequencia (Cell cell[],int pos){

    CellSoma pegaRetorno;
    Cell atual;
    CellSoma valorSomado;
    CellSoma casoBase;
    if(pos==0){
        casoBase.peso=cell[pos].peso;
        casoBase.car=cell[pos].car;
        casoBase.resultadoDaSoma = 0;
        return casoBase;
    }
    else{

        pegaRetorno = somaSequencia(cell,pos-1);
        atual = cell[pos];

        if(pegaRetorno.car==atual.car){
            valorSomado.car=atual.car;
            valorSomado.peso=atual.peso;
            if(pegaRetorno.maisDeDois==1){
                valorSomado.resultadoDaSoma=atual.peso+pegaRetorno.resultadoDaSoma;

            }
            else{
                valorSomado.resultadoDaSoma=pegaRetorno.peso+atual.peso+pegaRetorno.resultadoDaSoma;
                valorSomado.maisDeDois=1;
            }
            return valorSomado;
        }
        else{
            pegaRetorno.maisDeDois=0;
            pegaRetorno.car=atual.car;
            pegaRetorno.resultadoDaSoma = pegaRetorno.resultadoDaSoma;
            pegaRetorno.peso=atual.peso;
            return pegaRetorno;
        }
    }
}

int main()
{
    int escolhaUsuario;
    int tamanhoDoVetorUsuario;
    char caracterUsuario;
    int pesoUsuario;
    printf("1-Criar seus proprios caracteres e pesos\n2-Exemplo prova\nQual?:");
    scanf("%d%*c",&escolhaUsuario);


    if(escolhaUsuario==1){
        printf("Qual o tamanho do vetor?:");
        scanf("%d%*c", &tamanhoDoVetorUsuario);
        Cell *vetorUsuario = malloc(tamanhoDoVetorUsuario * sizeof(Cell));

        for(int i = 0 ; i< tamanhoDoVetorUsuario; i++){
            printf("\nDigite o caracter e o peso(ex:y 2):");
            scanf("%c%d%*c", &caracterUsuario,&pesoUsuario);
            printf("\nFalta %d para preencher!\n",tamanhoDoVetorUsuario-i-1);
            vetorUsuario[i].car=caracterUsuario;
            vetorUsuario[i].peso=pesoUsuario;
        }
        CellSoma retornoMain = somaSequencia(vetorUsuario,tamanhoDoVetorUsuario-1);
        printf("%d",retornoMain.resultadoDaSoma);
    }

    if(escolhaUsuario==2){

        Cell cell[7];

        cell[0].car='y';
        cell[1].car='y';
        cell[2].car='z';
        cell[3].car='z';
        cell[4].car='z';
        cell[5].car='y';
        cell[6].car='a';

        cell[0].peso=1;
        cell[1].peso=2;
        cell[2].peso=5;
        cell[3].peso=4;
        cell[4].peso=5;
        cell[5].peso=4;
        cell[6].peso=3;

        CellSoma retornoMain = somaSequencia(cell,6);
        printf("%d",retornoMain.resultadoDaSoma);

    }



    return 0;
}
