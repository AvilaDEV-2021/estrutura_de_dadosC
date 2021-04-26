#include <stdio.h>
#include "TADs_lineares_aloc_seq.h"

//TAD fila com alocação sequencial
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila)
{
    fila->frente = -1;
    fila->tras = fila->frente;
}

//testa se a fila é vazia
int TestaFilaVazia(TipoFila *fila)
{
    return ((fila->frente == -1) && (fila->tras == -1));
}

//insere um elemento na fila
void InsereFila(TipoFila *fila, TipoItem item)
{
    if ((fila->tras + 1) % TAM == fila->frente)
        printf("Erro: fila cheia\n");
    else
    {
        fila->tras = (fila->tras + 1) % TAM;
        fila->itens[fila->tras] = item;
        if (fila->frente == -1)
            fila->frente = 0;
    }
}

//remove um elemento da fila
void RemoveFila(TipoFila *fila, TipoItem *item)
{
    if (TestaFilaVazia(fila))
        printf("Erro: fila vazia\n");
    else
    {
        *item = fila->itens[fila->frente];
        if (fila->frente == fila->tras)
            fila->frente = fila->tras = -1;
        else
            fila->frente = (fila->frente + 1) % TAM;
    }
}

//imprime os elementos da fila
void ImprimeFila(TipoFila *fila)
{
    int aux, lim;

    if (TestaFilaVazia(fila))
        printf("Erro: fila vazia\n");
    else
    {
        if (fila->frente < fila->tras)
            lim = fila->tras - fila->frente;
        else
            lim = TAM - fila->frente + fila->tras;
        for (aux = 0; aux <= lim; aux++)
            printf("%i ", fila->itens[(fila->frente + aux) % TAM].chave);
    }
}
