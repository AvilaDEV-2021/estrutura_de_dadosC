#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

TipoFila *transfere(TipoFila *f1, TipoFila *f2){

    TipoFila *fila = (TipoFila *)malloc(sizeof(TipoFila));

    CriaFilaVazia(fila);

    TipoCelula *aux_1 = f1->frente->proximo;
    TipoCelula *aux_2 = f2->frente->proximo;

    while (aux_1 != NULL || aux_2 != NULL)
    {
        if(aux_1!=NULL)
        {
            InsereFila(fila,aux_1->item);
            aux_1= aux_1->proximo;
        }

        if(aux_2!=NULL)
        {
            InsereFila(fila,aux_2->item);
            aux_2= aux_2->proximo;
        }

    }
    return fila;
}


int main(void)
{
    TipoFila *fila1 = (TipoFila *)malloc(sizeof(TipoFila));
    TipoFila *fila2 = (TipoFila *)malloc(sizeof(TipoFila));
    TipoFila *fila3;

    CriaFilaVazia(fila1);
    CriaFilaVazia(fila2);

    int num;
    TipoItem e1;

    printf("\nQuantos numeros quer inserir na primeira fila? : ");
    scanf("%d",&num);

        for(int i=1; i<=num; i++){
        printf("Digite o proximo numero: ");
        scanf ("%d", &e1.chave);
        InsereFila(fila1,e1);
    }

     printf("\nQuantos numeros quer inserir na segunda fila? : ");
     scanf("%d",&num);

        for(int i=1; i<=num; i++){
        printf("Digite o proximo numero: ");
        scanf ("%d", &e1.chave);
        InsereFila(fila2,e1);
    }
        printf("\n\nFila 1: ");
        ImprimeFila(fila1);
        printf("\n\nFila 2: ");
        ImprimeFila(fila2);


        fila3 = transfere(fila1, fila2);
        printf("\n\nFila 3 alternada: ");
        ImprimeFila(fila3);


    return 0;
}

