#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

int main(void)
{
    setlocale(LC_ALL, "");

    printf("------------------\n");
    printf("  Árvore Binária\n");
    printf("------------------\n");

    TipoArvore **arvore_01 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_02 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_03 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_04 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_05 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_06 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_07 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_08 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_09 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_10 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_11 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_12 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_13 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_14 = (TipoArvore **)malloc(sizeof(TipoArvore *));

    CriaArvoreBinariaVazia(arvore_01);

    CriaArvoreBinariaVazia(arvore_02);

    //sub-árvore D
    CriaArvoreBinariaVazia(arvore_03);
    TipoItem e1;
    e1.chave = 'd';
    CriaArvoreBinaria(e1, arvore_03, arvore_01, arvore_02);

    CriaArvoreBinariaVazia(arvore_04);

    CriaArvoreBinariaVazia(arvore_05);

    //sub-árvore E
    CriaArvoreBinariaVazia(arvore_06);
    TipoItem e2;
    e2.chave = 'e';
    CriaArvoreBinaria(e2, arvore_06, arvore_04, arvore_05);

    CriaArvoreBinariaVazia(arvore_07);

    CriaArvoreBinariaVazia(arvore_08);

    //sub-árvore F
    CriaArvoreBinariaVazia(arvore_09);
    TipoItem e3;
    e3.chave = 'f';
    CriaArvoreBinaria(e3, arvore_09, arvore_07, arvore_08);

    CriaArvoreBinariaVazia(arvore_10);

    //sub-árvore B
    CriaArvoreBinariaVazia(arvore_11);
    TipoItem e4;
    e4.chave = 'b';
    CriaArvoreBinaria(e4, arvore_11, arvore_10, arvore_03);

    //sub-árvore C
    CriaArvoreBinariaVazia(arvore_12);
    TipoItem e5;
    e5.chave = 'c';
    CriaArvoreBinaria(e5, arvore_12, arvore_06, arvore_09);

    //árvore A
    CriaArvoreBinariaVazia(arvore_13);
    TipoItem e6;
    e6.chave = 'a';
    CriaArvoreBinaria(e6, arvore_13, arvore_11, arvore_12);

    printf("\n");
    ImprimeArvoreBinaria(arvore_13, 0);

    char no;
    printf("\nQual no gostaria de calcular a altura: a, b, c, d, e ou f?\n");
    scanf("%c", &no);

    switch (no){
        case 'a':
        printf("Você escolheu o no a");
        int a = CalculaAlturaNo(arvore_13);
        printf("\nA Altura do no é : %i\n", a);
        break;

        case 'b':
        printf("Você escolheu o no b");
        int b = CalculaAlturaNo(arvore_11);
        printf("\nA Altura do no é : %i\n", b);
        break;

        case 'c':
        printf("Você escolheu o no c");
        int c = CalculaAlturaNo(arvore_12);
        printf("\nA Altura do no é : %i\n", c);
        break;

        case 'd':
        printf("Você escolheu o no d");
        int d = CalculaAlturaNo(arvore_03);
        printf("\nA Altura do no é : %i\n", d);
        break;

        case 'e':
        printf("Você escolheu o no e");
        int e = CalculaAlturaNo(arvore_06);
        printf("\nA Altura do no é : %i\n", e);
        break;

        case 'f':
        printf("Você escolheu o no f");
        int f = CalculaAlturaNo(arvore_09);
        printf("\nA Altura do no é : %i\n", f);
        break;

        default:
        printf("Insira uma letra valida");
        break;
}

    /*int h = CalculaAlturaArvoreBinaria(arvore_13);
    printf("\nA Altura da árvore binária é : %i", h);*/

    return 0;
}
