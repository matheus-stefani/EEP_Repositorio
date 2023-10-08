
/*
 * Ele cria duas árvores.
 * A ordem de inserção dos caracteres nos nós importa para o funcionamento do programa.
 * É preciso informar o tamanho da palavra antecipadamente.
 * O programa só testa palíndromos nos tamanhos de 3 a 7.
 */


#include <malloc.h>
#include <stdio.h>
#include <string.h>
typedef struct arv {
    char info;
    struct arv* esq;
    struct arv* dir;
} Arv;


Arv* cria(char val)
{
    Arv* p = (Arv*)malloc(sizeof(Arv));
    p->info = val;
    p->esq = NULL;
    p->dir = NULL;
    return p;
}


void imprime(Arv* a)
{

    if (a == NULL)return;

    imprime(a->esq);
    printf("%c",a->info);
    imprime(a->dir);

}


void criaEspelho(Arv* a, Arv** espelho)
{
    if (a == NULL) {
        espelho = NULL;
        return;
    }


    *espelho = cria(a->info);
    criaEspelho(a->esq, &((*espelho)->dir));
    criaEspelho(a->dir, &((*espelho)->esq));


}

void pegaArvoreAux(Arv* a, char* v, int* index) {
    if (a == NULL)
        return;

    pegaArvoreAux(a->esq, v, index);

    v[(*index)++] = a->info;

    pegaArvoreAux(a->dir, v, index);
}

char* pegaArvore(Arv* a, char* v) {
    int index = 0;
    pegaArvoreAux(a, v, &index);
    v[index] = '\0';

    return v;
}


int verificaPalindromo (char* normal){
    int j=strlen(normal)-1;
    for(int i=0;i<strlen(normal);i++){
        if(normal[i]!=normal[j]){
            return 1;
        }
        j--;
    }
    return 0;
}


Arv* inserindoOsChars(Arv* tree,int tam,char * vetorUsuario);
int main()
{
    char vetorNormal[100];
    char vetorEspelhado[100];
    char vetorUsuario[100];
    int tamanhoPalavraUsuario;
    vetorNormal[0] = '\0';
    vetorEspelhado[0] = '\0';

    printf("Sua palavra tera quantas letras?(3 a 7):");
    scanf("%d%*c",&tamanhoPalavraUsuario);

    printf("Teste palavra palindroma de %d letras:", tamanhoPalavraUsuario);
    fgets(vetorUsuario,tamanhoPalavraUsuario+1,stdin);

    Arv *tree = NULL;

    tree = inserindoOsChars(tree,tamanhoPalavraUsuario,vetorUsuario);

    Arv* mirror = NULL;
    criaEspelho(tree, &mirror);
    printf("\n");
    printf("Arvore Normal:");
    imprime(tree);
    printf("\n");
    printf("Arvore Espelhada:");
    imprime(mirror);
    printf("\n");

    char* resultadoNormal = pegaArvore(tree, vetorNormal);

    int resultadoDoPalindromo = verificaPalindromo(resultadoNormal);
    printf("\n");
    if(resultadoDoPalindromo==0)printf("%s e palindromo!",vetorUsuario);
    else printf("%s nao e palindromo!",vetorUsuario);
    printf("\n");
    return 0;
}





Arv* inserindoOsChars(Arv* tree,int tam,char * vetorUsuario){

    switch (tam) {
        case 3:
            tree = cria(vetorUsuario[2]);
            tree->esq = cria(vetorUsuario[1]);
            tree->esq->esq = cria(vetorUsuario[0]);
            return tree;

        case 4:
            tree = cria(vetorUsuario[3]);
            tree->esq = cria(vetorUsuario[1]);
            tree->esq->esq = cria(vetorUsuario[0]);
            tree->esq->dir = cria(vetorUsuario[2]);
            return tree;

        case 5:
            tree = cria(vetorUsuario[3]);
            tree->esq = cria(vetorUsuario[1]);
            tree->dir = cria(vetorUsuario[4]);
            tree->esq->esq = cria(vetorUsuario[0]);
            tree->esq->dir = cria(vetorUsuario[2]);
            return tree;

        case 6:
            tree = cria(vetorUsuario[3]);
            tree->esq = cria(vetorUsuario[1]);
            tree->dir = cria(vetorUsuario[4]);
            tree->esq->esq = cria(vetorUsuario[0]);
            tree->esq->dir = cria(vetorUsuario[2]);
            tree->dir->dir = cria(vetorUsuario[5]);
            return tree;

        case 7:
            tree = cria(vetorUsuario[3]);
            tree->esq = cria(vetorUsuario[1]);
            tree->dir = cria(vetorUsuario[5]);
            tree->esq->esq = cria(vetorUsuario[0]);
            tree->esq->dir = cria(vetorUsuario[2]);
            tree->dir->dir = cria(vetorUsuario[6]);
            tree->dir->esq = cria(vetorUsuario[4]);
            return tree;


        default:
            printf("Valor incorreto!");
    }
    return tree;
}
