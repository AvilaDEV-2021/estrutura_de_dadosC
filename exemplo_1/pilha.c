#include <stdio.h>
#include "TADs_lineares_aloc_seq.h"

//TAD pilha com alocação sequencial
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha)
{
    pilha->topo = -1;
}

//testa se a pilha é vazia
int TestaPilhaVazia(TipoPilha *pilha)
{
    return (pilha->topo == -1);
}

//insere um elemento na pilha
void InserePilha(TipoPilha *pilha, TipoItem item)
{
    if (pilha->topo == TAM - 1)
        printf("Erro: pilha cheia\n");
    else
    {
        pilha->topo++;
        pilha->itens[pilha->topo] = item;
    }
}

//remove um elemento da pilha
void RemovePilha(TipoPilha *pilha, TipoItem *item)
{
    if (TestaPilhaVazia(pilha))
        printf("Erro: pilha vazia\n");
    else
    {
        *item = pilha->itens[pilha->topo];
        pilha->topo--;
    }
}

//imprime os elementos da pilha
void ImprimePilha(TipoPilha *pilha)
{
    int aux;

    if (TestaPilhaVazia(pilha))
        printf("Erro: pilha vazia\n");
    else
        for (aux = pilha->topo; aux >= 0; aux--)
            printf("%i ", pilha->itens[aux].chave);
}
