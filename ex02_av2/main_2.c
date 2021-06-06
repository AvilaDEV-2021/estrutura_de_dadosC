#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_busca.h"

int main(void)
{
    setlocale(LC_ALL, "");

    printf("---------------------------\n");
    printf("  �rvore Bin�ria de Busca\n");
    printf("---------------------------\n");

    TipoCelula *arvore1 = (TipoCelula *)malloc(sizeof(TipoCelula *));
    char mensagem[10], num_pacote[10];
    int cont, i;

    printf("\nCria��o da �rvore vazia\n");
    CriaArvoreBinariaBuscaVazia(arvore1);
    printf("\nVerifica��o se a �rvore criada � vazia -> %i\n", TestaArvoreBinariaBuscaVazia(arvore1));

    printf("\nEntre com uma mensagem para ser transmitida -> ");
    gets(mensagem);
    printf("\n\nMensagem a ser enviada -> %s\n\n", mensagem);

    printf("\n-------------Fragmenta��o da mensagem-------------\n\n");
    printf(" id ");
    for (cont = 0; cont < 10; cont++)
        printf("| %d |", cont);
    printf("\n");
    printf("dado");
    for (cont = 0; cont < 10; cont++)
        printf("| %c |", mensagem[cont]);

    printf("\n\n");

    printf("\n-------------Numero de repeti��es dos pacotes-------------\n\n");
    for (i = 0; i < 10; i++)
    {
        num_pacote[i] = rand() % 10;
        printf("Pacote | %c | ser� repetido %d vezes\n", mensagem[i], num_pacote[i]);
    }

    getchar();
    return 0;
}
