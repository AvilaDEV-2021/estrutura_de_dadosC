#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

void inverte(TipoPilha *p){

    TipoFila *fila = (TipoFila *)malloc(sizeof(TipoFila));
    CriaFilaVazia(fila);
    TipoItem item;

    TipoCelula *aux = p->topo->proximo;

    while (aux != NULL){
        item = aux->item;
        InsereFila(fila, item);
        RemovePilha(p, &item);
        aux = aux->proximo;
    }

    TipoCelula *ax = fila->frente->proximo;
    while (ax != NULL)
    {
        item = ax->item;
        InserePilha(p, item);
        RemoveFila(fila, &item);
        ax = ax->proximo;
    }
    ImprimePilha(p);
}
int main(void)
{

    printf("---------\n");
    printf("  Pilha\n");
    printf("---------\n");

    TipoPilha *pilha = (TipoPilha *)malloc(sizeof(TipoPilha));

	int N = 1;
    int *p = malloc(N*sizeof(int));

    CriaPilhaVazia(pilha);

    TipoItem e1;

    for(int i = 0; i<N; i++) {
        printf("Digite um numero [-1 PARA SAIR]: ");
        scanf("%d", &p[i]);
          if (p[i] == -1) {
            break;
          }
        else {
        e1.chave = p[i];
        InserePilha(pilha, e1);
    }
        N++;
        p = (int *)realloc(p, N * sizeof(int));
    }

    printf("\n------------------------------\n");
    ImprimePilha(pilha);
    printf("\n------------------------------\n");

    printf("\n---------\n");
    printf("PILHA INVERTIDA");
    printf("\n---------\n");

    printf("\n------------------------------\n");
    inverte(pilha);
    printf("\n------------------------------\n");

    printf("\n\n");

    return 0;
}
