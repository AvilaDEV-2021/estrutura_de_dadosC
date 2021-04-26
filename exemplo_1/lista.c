#include <stdio.h>
#include "TADs_lineares_aloc_seq.h"

//TAD lista com alocação sequencial
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista)
{
    lista->primeiro = -1;
    lista->ultimo = lista->primeiro;
}

//testa se a lista é vazia
int TestaListaVazia(TipoLista *lista)
{
    return ((lista->primeiro == -1) && (lista->ultimo == -1));
}

//insere um elemento na lista
void InsereLista(TipoLista *lista, TipoItem item)
{
    if (lista->ultimo == TAM - 1)
        printf("Erro: lista cheia\n");
    else
    {
        lista->ultimo++;
        lista->itens[lista->ultimo] = item;
        if (lista->primeiro == -1)
            lista->primeiro = 0;
    }
}

//remove um elemento da lista
void RemoveLista(TipoLista *lista, TipoItem *item, int pt)
{
    int aux;

    if (TestaListaVazia(lista))
        printf("Erro: lista vazia\n");
    else if ((pt < lista->primeiro) || (pt > lista->ultimo))
        printf("Erro: posição inexistente\n");
    else
    {
        *item = lista->itens[pt];
        for (aux = pt; aux < lista->ultimo; aux++)
            lista->itens[aux] = lista->itens[aux + 1];
        lista->ultimo--;
        if (lista->ultimo == -1)
            lista->primeiro = -1;
    }
}

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista)
{
    int aux;

    if (TestaListaVazia(lista))
        printf("Erro: lista vazia\n");
    else
        for (aux = lista->primeiro; aux <= lista->ultimo; aux++)
            printf("%i ", lista->itens[aux].chave);
}
