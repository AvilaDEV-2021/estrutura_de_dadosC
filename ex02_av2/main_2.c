#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_busca.h"

int main(void)
{
    setlocale(LC_ALL, "");

    printf("---------------------------\n");
    printf("  Árvore Binária de Busca\n");
    printf("---------------------------\n");

    TipoCelula *arvore1 = (TipoCelula *)malloc(sizeof(TipoCelula *));
    char mensagem[10], num_pacote[10];
    int cont, i;

    printf("\nCriação da árvore vazia\n");
    CriaArvoreBinariaBuscaVazia(arvore1);
    printf("\nVerificação se a árvore criada é vazia -> %i\n", TestaArvoreBinariaBuscaVazia(arvore1));

    printf("\nEntre com uma mensagem para ser transmitida -> ");
    gets(mensagem);
    printf("\n\nMensagem a ser enviada -> %s\n\n", mensagem);

    printf("\n-------------Fragmentação da mensagem-------------\n\n");
    printf(" id ");
    for (cont = 0; cont < 10; cont++)
        printf("| %d |", cont);
    printf("\n");
    printf("dado");
    for (cont = 0; cont < 10; cont++)
        printf("| %c |", mensagem[cont]);

    printf("\n\n");

    printf("\n-------------Numero de repetições dos pacotes-------------\n\n");
    for (i = 0; i < 10; i++)
    {
        num_pacote[i] = rand() % 10;
        printf("Pacote | %c | será repetido %d vezes\n", mensagem[i], num_pacote[i]);
    }

    getchar();
    return 0;
}
