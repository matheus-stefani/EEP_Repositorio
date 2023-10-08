#include <stdio.h>
#include <stdlib.h>
typedef struct no{
    int valor;
    struct no *proximo;
}No;
// inicializarAlista
int inicializarAlista(No **lista){
    *lista=NULL;
    return 0;
}
// inserirNoInicio
int inserirNoInicio(No **lista, int valor){
    No *novo=(No *)malloc(sizeof(No));
    novo->valor=valor;
    novo->proximo=*lista;
    if(*lista==NULL){
        *lista=novo;

    }
    else{
    *lista=novo;
    }
    return 0;
}
// imprimirLista
int imprimirLista(No *lista){
    No *aux;
    aux=lista;
    if(lista==NULL){
        return 1;
    }
    while(aux){
        printf("%d ", aux->valor);
        aux=aux->proximo;
    }
    return 0;
}
//removerNoInicio
int removerNoInicio(No **lista){
    if(*lista==NULL){
        return 1;
    }
    No *aux;
    aux=*lista;
    *lista=aux->proximo;
    free(aux);
    return 0;
}
//inserirNoFinal
int inserirNoFinal(No **lista, int valor){
    No *aux,*novo=(No *) malloc(sizeof(No));
    novo->valor=valor;
    novo->proximo=NULL;
    aux=*lista;
    if(*lista==NULL){
        *lista=novo;
    }
    else{
     while(aux->proximo){
        aux=aux->proximo;
    }
    aux->proximo=novo;
    }
    return 0;
}
//removerNoFim
int removerNoFim(No **lista){
    No *aux1, *aux2;
    if(*lista==NULL){
        return 1;
    }
    aux1=*lista;
    if((*lista)->proximo==NULL){
        free(aux1);
        *lista=NULL;
        return 0;
    }
    while(aux1->proximo){
        aux2=aux1;
        aux1=aux1->proximo;
    }
    aux2->proximo=NULL;
    free(aux1);
    return 0;
}
//obterTamanhoDaLista
int obterTamanhoDaLista(No *lista, int *tam){
   *tam=0;
    while(lista){
        (*tam)++;
        lista=lista->proximo;
    }
    return 0;
}
//obterPosicaoNaLista
int obterPosicaoNaLista(No *lista,int valor, int *pos){
    No *aux;
    *pos=0;
    aux=lista;
    while(aux){
        (*pos)++;
        if(aux->valor==valor){
          return 0;
        }
        aux=aux->proximo;
    }
    return 1;
}
//obterODado
int obterODado(No *lista, int *valor, int pos){
    int cont=1;
    int tam=0;
    if(lista==NULL){
        return 1;
    }
    obterTamanhoDaLista(lista,&tam);
    if(pos>tam){
        return 2;
    }
    while(cont!=pos){
        lista=lista->proximo;
        cont++;
    }
    *valor=lista->valor;
            return 0;
    }
//inserirNoMeio
int inserirNoMeio(No **lista,int valor,int pos){
    No *aux1,*aux2,*novo=(No *)malloc(sizeof(No));

    if(*lista==NULL){
        return 1;
    }
    int tam=0;
    obterTamanhoDaLista(*lista,&tam);
    if(pos>tam){
        return 2;
    }
    if(pos==1){
        inserirNoInicio(lista,valor);
        return 0;
    }
    if(pos==tam){
        inserirNoFinal(lista,valor);
        return 0;
    }
    novo->valor=valor;
    aux1=*lista;
    int cont=1;
    while(cont!=pos){
        aux2=aux1;
        aux1=aux1->proximo;
        cont++;
    }
    novo->proximo=aux1;
    aux2->proximo=novo;
    return 0;
}
//removerNoMeio
int removerNoMeio(No **lista, int pos){
    No *aux1, *aux2;
    if(*lista==NULL){
        return 1;
    }
    int tam=0;
    obterTamanhoDaLista(*lista,&tam);
    if(pos>tam){
        return 2;
    }
    if(pos==1){
        removerNoInicio(lista);
        return 0;
    }
    if(pos==tam){
        removerNoFim(lista);
        return 0;
    }
    int cont=1;
    aux1=*lista;
    while(pos!=cont){
        cont++;
        aux2=aux1;
        aux1=aux1->proximo;

    }
    aux2->proximo=aux1->proximo;
    free(aux1);
    return 0;
}
//reniciarALista
int reniciarALista(No **lista){
    No *aux1, *aux2;
    aux1=*lista;
    if(*lista==NULL){
        inicializarAlista(lista);
        return 0;
    }
    while(aux1){
        aux2=aux1;
        aux1=aux1->proximo;
        free(aux2);
    }
    *lista=NULL;
    return 0;
}
//inverterALista
int inverterALista(No **lista){
    No *percorrer,*aux1,*aux2,*aux3;
    percorrer=*lista;
    if(*lista==NULL){
        return 1;
    }
    if(percorrer->proximo==NULL){
        return 0;
    }
    aux1=*lista;
    aux2=aux1->proximo;
    aux3=aux2->proximo;
    aux1->proximo=NULL;
    aux2->proximo=aux1;
    while(aux3!=NULL){
        aux1=aux2;
        aux2=aux3;
        aux3=aux3->proximo;
        aux2->proximo=aux1;
    }
    *lista=aux2;
    return 0;
}
//copiaListaL1paraListaP2
int copiaListaL1paraListaP2(No **lista2,No *lista, int tam, int *contTeste){
    No *aux1,*aux2,*aux3,*novoCopia=(No *)malloc(sizeof(No));
    aux1=lista;
    if(lista==NULL){
        return 1;
    }
    (*contTeste)--;
    int *valor;
    obterODado(lista,&valor,*contTeste);
        novoCopia->valor=valor;
        novoCopia->proximo=*lista2;
        *lista2=novoCopia;
        return 0;
}
//imprimirListaL2
int imprimirListaL2(No *lista2){
    No *aux1;
    if(lista2==NULL){
        return 1;
    }
    aux1=lista2;
    while(aux1){
        printf("%d ", aux1->valor);
        aux1=aux1->proximo;
    }
    return 0;
}
//trocarDado
int trocarDado(No **lista, int a, int b){
    No *aux1,*aux2, *aux3;
    if(*lista==NULL){
        return 3;
    }
    aux1=*lista;
    aux2=*lista;
    int tester = 0;
    while(aux1){
        if(aux1->valor==a){
            aux3=aux1;
            tester =1;
        }
        aux1=aux1->proximo;
        }
        if(tester==0){
            return 1;
        }
    while(aux2){
        if(aux2->valor==b){
            aux2->valor=a;
            aux3->valor=b;
            return 0;
        }
        aux2=aux2->proximo;
    }
        return 2;
    }
//maiorDadoDaLista
int maiorDadoDaLista(No *lista,int *maiorDado){
    No *aux1;

    aux1=lista;
    if(lista==NULL){
        return 1;
    }
    while(aux1){
            if(aux1->valor>(*maiorDado)){
            *maiorDado=aux1->valor;
        }
        aux1=aux1->proximo;

    }
    return 0;
}
//testeDadoRepetindoNaLista
int testeDadoRepetindoNaLista(No *lista,int *dadoRepetindo){
    No *aux1;
    aux1=lista; // 7 6 6 5 4 3 2 1
    int tam=0;
    if(lista==NULL){
        return 1;
    }

    obterTamanhoDaLista(lista, &tam);
    int cont1=1;
    int cont2=1;
    int valor;
    int teste;
    int teste2;
    while(cont1!=tam){
        obterODado(lista, &valor,cont1);
        teste=valor;
        cont2=1;
        while(cont2!=tam){
            obterODado(lista, &valor,cont2);
        teste2=valor;
            if(teste==teste2 && cont1!=cont2){
                *dadoRepetindo=teste2;
                return 0;
        }
        cont2++;
        }
        cont1++;
    }
    return 1;
}
//transferindoOPrimeiroNoParaOUltimo
int transferindoOPrimeiroNoParaOUltimo(No **lista){
    No *aux1,*aux2,*aux3,*novo=(No *)malloc(sizeof(No));
    aux1=*lista;
    int valor;
    obterODado(aux1,&valor,1);
    aux2=*lista;
    if(*lista==NULL){
        return 1;
    }
    if((*lista)->proximo==NULL){
        return 0;
    }
    *lista=aux2->proximo;
    while(aux1->proximo){
        aux3=aux1;
        aux1=aux1->proximo;
    }
    novo->valor=valor;
    novo->proximo=NULL;
    aux3->proximo=novo;
    free(aux1);
    return 0;
}
//somaDoNumeros
int somaDoNumeros(No *lista, int *soma){
    No *aux1;
    aux1=lista;
    if(lista==NULL){
        return 1;
    }
    if(lista->proximo==NULL){
        *soma=lista->valor;
        return 0;
    }

    while(aux1){
        *soma=*soma+(aux1->valor);
        aux1=aux1->proximo;
    }

    return 0;
}

//menorNumeroDaLista
int menorNumeroDaLista(No *lista, int *menorNumero){
    No *aux1;
    aux1=lista;
    if(lista==NULL){
        return 1;
    }
    if(lista->proximo==NULL){
        return 0;
    }
    *menorNumero=aux1->valor;
    while(aux1){
        if(aux1->valor<*menorNumero){
            *menorNumero=aux1->valor;
        }
        aux1=aux1->proximo;
    }
    return 0;
}
//listaEmOrdemCrescente
int listaEmOrdemCrescente(No **lista){
   No *aux1;
   aux1=*lista;
   if(*lista==NULL){
    return 1;
   }
   if((*lista)->proximo==NULL){
    return 0;
   }
   int tam=0;
   int cont1=1;
   int cont2=1;
   int valor;
   int b;
   int a;
   int c;
   int teste=0;
   obterTamanhoDaLista(*lista,&tam);
   while(aux1){
        b=aux1->valor;
        cont1=cont2;
        c=b;
        teste=0;
        while(cont1!=tam+1){
            obterODado(*lista,&valor,cont1);
            if(c>valor){
                c=valor;
                a=valor;
                teste=1;
            }
            cont1++;
        }
        if(teste==1 && b!=a){
          trocarDado(lista,b,a);
        }
        aux1=aux1->proximo;
        cont2++;
   }
   return 0;
}
//listaEmOrdemDecrescente
int listaEmOrdemDecrescente(No **lista){
    No *aux1;
    aux1=*lista;
    if(*lista==NULL){
        return 1;
    }
    if((*lista)->proximo==NULL){
        return 0;
    }
    int cont1=1;
    int cont2=1;
    int tam=0;
    int maiorValor;
    int tester=0;
    int a;
    int b;
    int c;
    int valor;
    obterTamanhoDaLista(*lista,&tam);


    while(aux1){

        a=aux1->valor;
        b=a;
        c=b;
        cont1=cont2;
        while(cont1!=tam+1){
            obterODado(*lista,&valor,cont1);
            if(valor>c){
                c=valor;
                a=valor;
                tester=1;
            }
            cont1++;
        }

        if(tester==1 && b!=a){
            trocarDado(lista,a,b);
        }
        aux1=aux1->proximo;
        cont2++;
        tester=0;

    }
}
//mediaDosValoresListaEncadeada
int mediaDosValoresListaEncadeada(No *lista, int *media){
    if(lista==NULL){
        return 1;
    }
    No *aux1;
    aux1=lista;

    if(lista->proximo==NULL){
        return 0;
    }
    int soma=0;
    int tam=0;
    obterTamanhoDaLista(lista,&tam);

    while(aux1){
        soma=soma+aux1->valor;
        aux1=aux1->proximo;
    }
    *media=soma/tam;
    return 0;
}
//penultimoNumero
int penultimoNumero(No *lista, int *penultimo){
    if(lista==NULL){
        return 1;
    }
    if(lista->proximo==NULL){
        return 0;
    }
    int tam=0;
    obterTamanhoDaLista(lista,&tam);
    int clerisvaldo;
    clerisvaldo=tam-1;
    int valor;
    obterODado(lista,&valor,clerisvaldo);
    *penultimo=valor;
    return 0;
}
//removerDadosRepetidos
int removerDadosRepetidos(No **lista){

    if(*lista==NULL){
        return 1;
    }
    if((*lista)->proximo==NULL){
        return 0;
    }

    No *aux1;
    aux1=*lista;
    int cont1=1;
    int cont2=1;
    int pos1;
    int pos2;
    int valor;
    int tam=0;
    int valorIgual;
    int tester;
    obterTamanhoDaLista(*lista,&tam);
    while(aux1){
        valorIgual=aux1->valor;
        printf("ValorIgual antes do while:%d\n",valorIgual);
        pos2=cont2;
        printf("pos2 recebe antes do while:%d\n",pos2);
        cont1=cont2;
        printf("cont1 recebe antes do while:%d\n",cont1);
        tester = 0;
        while(cont1!=tam+1){
            obterODado(*lista,&valor,cont1);
            if(valor==valorIgual && cont1!=cont2){
                pos1=cont1;
                tester=1;
                printf("dentro do if pos1 recebe:%d\n",pos1);
            }
            cont1++;
            printf("cont1 recebe dentro do while:%d\n",cont1);
        }
        aux1=aux1->proximo;
         if(tester==1){
            printf("%d pos1\n",pos1);
         printf("%d pos2\n",pos2);
           removerNoMeio(lista,pos1);
            removerNoMeio(lista,pos2);
            break;
        }
        cont2++;
        printf("cont2 abaixo do while recebe:%d",cont2);
    }

    return 0;
}
//inverterALista2
int inverterALista2(No **lista){

    if(*lista==NULL){
        return 1;
    }
    if((*lista)->proximo==NULL){
        return 0;
    }
    No *aux1;
    aux1=*lista;
    int valor;
    int cont1=1;
    int tam=0;
    obterTamanhoDaLista(*lista,&tam);
    inicializarAlista(&aux1);
    while(cont1!=tam+1){
        valor=(*lista)->valor;
        printf("valor:%d\n",valor);
        removerNoInicio(lista);
        inserirNoInicio(&aux1,valor);
        printf("cont1 recebe a abaixo:%d",cont1);
    }
    *lista=aux1;
    return 0;

}
//copiarALista2
int copiarALista2(No **lista2,No *lista){

    int cont1=1;
    int tam=0;
    int valor;
    inicializarAlista(lista2);
    obterTamanhoDaLista(lista,&tam);
    while(cont1!=tam+1){
        obterODado(lista,&valor,cont1);
        inserirNoFinal(lista2,valor);
        cont1++;
    }
    return 0;

}
//trocarDadosV2
int trocarDadosV2(No **lista, int a, int b){
    No *aux1,*aux2;
    int tester=0;
    aux1=*lista;

    if(*lista==NULL){
        return 1;
    }
    if((*lista)->proximo){
        return 0;
    }
    while(aux1){
        if(aux1->valor==a){
            aux2=aux1;
            tester=1;
        }
        aux1=aux1->proximo;
    }
    if(tester==0){
        return 1;
    }
    tester=0;
    aux1=*lista;
    while(aux1){
        if(aux1->valor==b){
            aux1->valor=a;
            aux2->valor=b;
            tester=1;
        }
        aux1=aux1->proximo;
    }
    if(tester==0){
        return 1;
    }
    return 0;
}
//tirarTodosOsNumeroPares
int tirarTodosOsNumeroPares(No **lista){
    No *aux1;
    if(*lista==NULL){
        return 1;
    }
    aux1=*lista;
    int cont1=1;
    int tam=0;
    int valor;
    obterTamanhoDaLista(*lista,&tam);

    while(cont1!=tam+1){
        obterODado(*lista,&valor,cont1);
        if(valor%2==0){
            removerNoMeio(lista,cont1);
        }
        cont1++;
    }
    return 0;
}
//revisaoListaEmOrdemCrescente
int revisaoListaEmOrdemCrescente(No **lista){
    No *aux1;
    if(*lista==NULL){
        return 1;
    }
    if((*lista)->proximo==NULL){
        return 0;
    }
    aux1=*lista;
    int tam=0;
    int cont1=1;
    int cont2=1;
    int valor;
    int menorValor;
    int tester=0;
    int valorSalvo;
    int valorDoIf;
    obterTamanhoDaLista(*lista,&tam);
    while(aux1){
        valorSalvo=aux1->valor;
        menorValor=valorSalvo;
        valorDoIf=menorValor;
        cont2=cont1;
        while(cont2!=tam+1){
            obterODado(*lista,&valor,cont2);
            if(valor<valorDoIf){
                valorDoIf=valor;
                menorValor=valor;
                tester=1;
            }
            cont2++;
        }
        if(tester==1){
            trocarDado(lista,menorValor,valorSalvo);
        }
        aux1=aux1->proximo;
        tester=0;
        cont1++;
    }
    return 0;
}
// ****funcao main****
int main()
{
    No *lista, *lista2;
    int op, erros, valor, iniciar, tam, pos, a,b, maiorDado=0,dadoRepetindo;
    int soma=0, menorNumero=0, penultimo;
    int media;
    do{
    printf("\nAperte '1' para Inicializar a lista:");
    scanf("%d", &iniciar);
     if(iniciar==1){
        erros=inicializarAlista(&lista);
        if(erros!=0)printf("Erro ao iniciar a lista.");
    }
    else{
        printf("\nOpcao invalida.\n");
    }

    }while(iniciar!=1);

    do{
    printf("\n2-Inserir No inicio");
    printf("\n3-Imprimir a lista.");
    printf("\n4-Remover o primeiro valor da lista.");
    printf("\n5-Inserir no final.");
    printf("\n6-Remover no fim.");
    printf("\n7-Obter o tamanho da lista.");
    printf("\n8-Obter a posicao de um dado na lista.");
    printf("\n9-Obter o dado apartir da posicao.");
    printf("\n10-Inserir no meio.");
    printf("\n11-Remover no meio");
    printf("\n12-Reniciar a lista.");
    printf("\n13-Inveter a lista.");
    printf("\n14-Copia lista L1 para L2.");
    printf("\n15-Imprime Lista lista 2.");
    printf("\n16-Trocar dado.");
    printf("\n17-Obter o maior valor da lista.");
    printf("\n18-Testa dado repetindo.");
    printf("\n19-Primeiro no vira o ultimo no.");
    printf("\n20- Somando os numeros da lista.");
    printf("\n21-Inverter a lista versao 2.");
    printf("\n22-Menor numero da lista encadeada.");
    printf("\n23-Lista em ordem Crescente.");
    printf("\n24-Lista em ordem Decrescente.");
    printf("\n25-Media dos numeros lista encadeada.");
    printf("\n26-Penultimo Numero.");
    printf("\n27-Remover numeros repetidos.");
    printf("\n28-Copiar a lista 1 para lista 2.");
    printf("\n29-Trocar dado versao 2.");
    printf("\n30-Tirar todos os numeros pares da lista.");
    printf("\n31-Revisão lista em ordem crescente.");
    printf("\nQual:");
    scanf("%d", &op);
    switch(op){
    case 2:
        printf("Digite um valor:");
        scanf("%d", &valor);
        erros=inserirNoInicio(&lista,valor);
        if(erros!=0)printf("Erro ao inserir no inicio.");
        break;
    case 3:
        erros=imprimirLista(lista);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 4:
        erros=removerNoInicio(&lista);
        if(erros!=0)printf("Lista esta vazia, impossivel remover.");
        break;
    case 5:
        printf("Digite o valor:");
        scanf("%d", &valor);
        erros=inserirNoFinal(&lista,valor);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 6:
        erros=removerNoFim(&lista);
        if(erros!=0)printf("Erro ao remover no fim, Lista VAZIA!");
        break;
    case 7:
        erros=obterTamanhoDaLista(lista,&tam);
        printf("Tamanho da lista:%d", tam);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 8:
        if(lista==NULL){
            printf("Lista vazia.");
            break;
        }
        printf("Digite o valor que voce quer saber a posicao:");
        scanf("%d", &valor);
        erros=obterPosicaoNaLista(lista, valor, &pos);
        if(erros!=0){
            printf("O valor nao existe dentro da lista.");
            break;
        }
        printf("A posicao do %d eh:%d", valor,pos);
        break;
    case 9:
        printf("Digite a posicao que vc quer saber o dado:");
        scanf("%d", &pos);
        erros=obterODado(lista,&valor,pos);
        if(erros==1){
            printf("Lista vazia.");
            break;
        }
        if(erros==2){
            printf("Posicao não existe.");
            break;
        }
        printf("O dado da posicao %d eh:%d",pos,valor);
        break;
    case 10:
        printf("Digite a posicao e o dado:");
        scanf("%d%d", &pos,&valor);
        erros=inserirNoMeio(&lista,valor,pos);
        if(erros!=0)printf("Erro.");
        break;
    case 11:
        printf("Digite a posicao do dado que voce quer remover:");
        scanf("%d", &pos);
        erros=removerNoMeio(&lista,pos);
        if(erros!=0)printf("Erro ao remover o dado.");
        break;
    case 12:
        erros=reniciarALista(&lista);
        if(erros!=0)printf("Erro ao reniciar a lista.");
        break;
    case 13:
        erros=inverterALista(&lista);
        if(erros!=0)printf("Erro ao inveter a lista.");
        break;
    case 14:
        obterTamanhoDaLista(lista, &tam);
        int cont=0;
        int contTeste=(tam)+1;
        while(tam!=cont){
        erros=copiaListaL1paraListaP2(&lista2,lista,tam,&contTeste);
        cont++;
        if(erros!=0)printf("erro ao copiar a lista");
        }
        printf("a funcao foi rodada %d", contTeste);
        break;
    case 15:
        erros=imprimirListaL2(lista2);
        if(erros!=0)printf("L2 ESTA VAZIA!");
        break;
    case 16:
        printf("Digite o valor a, Digite o valor b:");
        scanf("%d%d", &a,&b);
        erros=trocarDado(&lista,a,b);
        if(erros==1)printf("Primeiro dado não existe.");
        if(erros==2)printf("Segundo não existe dado não existe.");
        if(erros==3)printf("Lista vazia.");
        break;
    case 17:
        erros=maiorDadoDaLista(lista,&maiorDado);
        if(erros!=0)printf("erro ao obter o maior dado da lista");
        printf("o maior dado da lista é:%d", maiorDado);
        break;
    case 18:

          erros=testeDadoRepetindoNaLista(lista,&dadoRepetindo);
          if(erros!=0){
            printf("não existe numero repito ou numero n existe\nou lista vazia");
            break;
          }
            printf("\nO dado:%d esta repetindo",dadoRepetindo);

        break;
    case 19:
        erros=transferindoOPrimeiroNoParaOUltimo(&lista);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 20:
        erros=somaDoNumeros(lista,&soma);
        if(erros!=0)printf("Lista vazia.");
        printf("A soma dos numero eh:%d",soma);
        break;
    case 21:
        erros=inverterALista2(&lista);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 22:
        erros=menorNumeroDaLista(lista,&menorNumero);
        if(erros!=0)printf("Lista vazia.");
        printf("O menor numero da lista eh:%d",menorNumero);
        break;
    case 23:
      erros=listaEmOrdemCrescente(&lista);
      if(erros!=0)printf("Lista vazia.");
      break;
    case 24:
        erros=listaEmOrdemDecrescente(&lista);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 25:
        erros=mediaDosValoresListaEncadeada(lista,&media);
        if(erros!=0)printf("Lista vazia.");
        printf("Media dos valor é:%d",media);
        break;
    case 26:
        erros=penultimoNumero(lista,&penultimo);
        if(erros!=0)printf("Lista vazia.");
        printf("O penultimo numero da lista eh:%d", penultimo);
        break;
    case 27:
        erros=removerDadosRepetidos(&lista);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 28:
        erros=copiarALista2(&lista2,lista);
        if(erros!=0)printf("Lista vazia.");
        break;
    case 29:
        printf("Digite o valor de a e b:");
        scanf("%d%d", &a,&b);
        erros=trocarDadosV2(&lista,a,b);
        if(erros!=0)printf("Deu algum erros parceiro.");
        break;
    case 30:
        erros=tirarTodosOsNumeroPares(&lista);
        if(erros!=0)printf("lista vazia");
        break;
    case 31:
        erros=revisaoListaEmOrdemCrescente(&lista);
        if(erros!=0)printf("Lista vazia.");
        break;
    default:
        printf("Opcao invalida.");
    }
    }while(op!=0);
    return 0;
}
