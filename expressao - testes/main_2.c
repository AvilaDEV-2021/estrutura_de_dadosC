#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TADs_pilha_fila_aloc_enc.h"
#define MAX 50

TipoFila *le_expressao(char *exp){
TipoFila *valores = (TipoFila *)malloc(sizeof(TipoFila));
int comprimento = strlen(exp);
TipoItem item;
CriaFilaVazia(valores);
for (int i = 0; i<comprimento; i++)  {
    if (exp[i] == ' ' || exp[i] == '\0')
        continue;
        item.valor = exp[i];
        InsereFila(valores, item);
    }
    return valores;
}

////////////////////////////////////////////////

int retornaResultado(int num1, int num2, int op)
{
    int operacao;
    switch(op)
    {
        case '+':
            operacao = num1 + num2;
            printf("Resultado: %d", &operacao);
            break;
        case '-':
            operacao = num1 - num2;
            printf("Resultado: %d", &operacao);
            break;
        case '*':
            operacao = num1 * num2;
            printf("Resultado: %d", &operacao);
            break;
        case '/':
            operacao = num1 / num2;
            printf("Resultado: %d", &operacao);
            break;
    }

    return operacao;
}

////////////////////////////////////////////////

int avalia_expressao(TipoFila *exp)
{
    TipoPilha * pilha = (TipoPilha *)malloc(sizeof(TipoPilha));
    TipoCelula *aux = exp->frente->proximo;
    TipoItem item;
    CriaPilhaVazia(pilha);
    int valor_digitado;

    while (aux != NULL)
    {
        if (aux->item.valor >= 'A' && aux->item.valor <= 'Z')
        {
            printf("Digite o valor de %c: ", aux->item.valor);
            scanf("%d", &valor_digitado);
            aux->item.valor = valor_digitado;
            InserePilha(pilha, aux->item);
        }
        else {
            int numero1, numero2;
            int operador = aux->item.valor;
            numero1 = item.valor = pilha->topo->item.valor;
            numero2 = item.valor = pilha->topo->item.valor;
            int resultado;
            resultado = retornaResultado(numero1, numero2, operador);
            item.valor = resultado;
            InserePilha(pilha, item);
        }
        aux = aux->proximo;
    }

}



main(){
 char a[30];
    int i;

    printf("Coloque os valores de entrada: ");
    scanf("%c", a);

    for (i = 0; i < strlen(a); i++)
        a[i] = (a[i]);

    TipoFila *fila = le_expressao(a);
    ImprimeFila(fila);

    return 0;
}
