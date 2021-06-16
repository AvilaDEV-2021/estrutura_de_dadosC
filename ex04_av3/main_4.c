#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include "TAD_arvore_binaria_busca.h"

int main(void)
{
    setlocale(LC_ALL, "");
    srand(time(NULL));

    TipoCelula **arvore1 = (TipoCelula **)malloc(sizeof(TipoCelula *));
    TipoCelula **arvore2 = (TipoCelula **)malloc(sizeof(TipoCelula *));
    CriaArvoreBinariaBuscaVazia(arvore1);
    CriaArvoreBinariaBuscaVazia(arvore1);

    TipoItem item;
    int i, aux;
    int *valor = (int*)malloc(aux* sizeof(int));

    printf("Quantos números aleatórios quer gerar? : ");
    scanf("%d", &aux);

    printf("\nNúmero gerados : ");
    for(i=0; i<aux; i++){
        valor[i] = rand( )%100;
        printf("%d\t", valor[i]);
        item.chave = valor[i];
        InsereArvoreBinariaBusca(arvore1, item);
    }

    printf("\n\nArvore inicial: \n");
    ImprimeArvoreBinariaBusca(arvore1, 0);

    for(i=0; i<aux; i++){
        if(valor[i]%2 != 0 ){
        item.chave = valor[i];
        RemoveArvoreBinariaBusca(arvore1, item);
        InsereArvoreBinariaBusca(arvore2, item);
        }
    }

    printf("\nArvore com os nós impares removidos da arvore inicial: \n");
    ImprimeArvoreBinariaBusca(arvore2, 0);

    return 0;
}
