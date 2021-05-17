#include <stdio.h>
#include <stdlib.h>
#include "TADs_lineares_aloc_enc.h"

int main(void)
{
    printf("---------\n");
    printf("  Lista\n");
    printf("---------\n");

    TipoLista *lista = (TipoLista *)malloc(sizeof(TipoLista));

    int N = 1;
    int *p = malloc(N*sizeof(int));

    CriaListaVazia(lista);

    TipoItem e1;

    for(int i = 0; i<N; i++) {
        printf("Digite um numero:  ");
        scanf("%d", &p[i]);
          if (p[i] == -1) {
            break;
          }
        else {
        e1.chave = p[i];
        InsereLista(lista, e1);
    }
        N++;
        p = (int *)realloc(p, N * sizeof(int));
    }

    ImprimeLista(lista);

    ListaComprimento(lista);

}
