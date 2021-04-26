#include <stdio.h>
#include <stdlib.h>
#include "TAD_lista_aloc_enc.h"

TipoLista * opera(TipoLista *p1, TipoLista *p2, int op)
{
    TipoLista * resultado = (TipoLista *)malloc(sizeof(TipoLista));
    CriaListaVazia(resultado);

    TipoCelula *aux = p1->primeiro->proximo;
    TipoCelula *aux2 = p2->primeiro->proximo;
    TipoItem valor_operacao;
    // TipoItem valor_operacao;

    if (op == 0)
    {
        while (aux != NULL)
        {
            while (aux2 != NULL)
            {
                // SOMA
                if(aux->item.grau == aux2->item.grau)
                {
                    valor_operacao.coeficiente = aux->item.coeficiente + aux2->item.coeficiente;
                    valor_operacao.grau = aux->item.grau;
                    InsereLista(resultado, valor_operacao);
                }
                aux2 = aux2->proximo;
            }
            aux = aux ->proximo;
        }
    }
    else if (op == 1)
    {
        while (aux != NULL)
        {
            while (aux2 != NULL)
            {
                // SUBTRACAO
                if(aux->item.grau == aux2->item.grau)
                {
                    valor_operacao.coeficiente = aux->item.coeficiente - aux2->item.coeficiente;
                    valor_operacao.grau = aux->item.grau;
                    InsereLista(resultado, valor_operacao);
                }
                aux2 = aux2->proximo;
            }
            aux = aux->proximo;
        }
    }


    return resultado;
}

int main(void)
{
    printf("---------\n");
    printf("  PRIMEIRO POLINOMIO\n");
    printf("---------\n");

    TipoLista *pol1 = (TipoLista *)malloc(sizeof(TipoLista));
    TipoLista *pol2 = (TipoLista *)malloc(sizeof(TipoLista));
    TipoLista *resultado = (TipoLista *)malloc(sizeof(TipoLista));

    CriaListaVazia(pol1);
    CriaListaVazia(pol2);
    CriaListaVazia(resultado);

    TipoItem termo;
    int N = 1;
    float *x = malloc(N*sizeof(float));
    int *y = malloc(N*sizeof(int));
    float *w = malloc(N*sizeof(float));
    int *z = malloc(N*sizeof(int));


    for(int i = 0; i<N; i++) {
        printf("Digite o coeficiente:  ");
        scanf("%f", &x[i]);
          if (x[i] == 0) {
            break;
          }
        else {
        termo.coeficiente = x[i];
        printf("Digite o grau : ");
        scanf("%d", &y[i]);
        termo.grau = y[i];
        InsereLista(pol1, termo);
    }
        N++;
        x = (float *)realloc(x, N * sizeof(float));
        y = (int *)realloc(y, N * sizeof(int));
    }

    ImprimeLista(pol1);


    printf("\n---------\n");
    printf("\nSEGUNDO POLINOMIO\n");
    printf("\n---------\n");



    for(int i = 0; i<N; i++) {
        printf("Digite o coeficiente:  ");
        scanf("%f", &w[i]);
          if (w[i] == 0) {
            break;
          }
        else {
        termo.coeficiente = w[i];
        printf("Digite o grau: ");
        scanf("%d", &z[i]);
        termo.grau = z[i];
        InsereLista(pol2, termo);
    }
        N++;
        w = (float*)realloc(w, N * sizeof(float));
        z = (int *)realloc(z, N * sizeof(int));
    }

    ImprimeLista(pol2);


    printf("\n0 - SOMA\n");
    TipoLista *somaresultado = opera(pol1, pol2, 0);
    ImprimeLista(somaresultado);


    printf("\n1 - SUBTRACAO\n");
    TipoLista *subresultado = opera(pol1, pol2, 1);
    ImprimeLista(subresultado);

    return 0;
}

