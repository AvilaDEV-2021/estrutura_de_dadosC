#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

int percorre(TipoArvore **arvore){
    if(!TestaArvoreBinariaVazia((*arvore)->esquerda)){
        printf("(");
        percorre((*arvore)->esquerda);
    }
    printf("%c ", (*arvore)->item.chave);
    if(!TestaArvoreBinariaVazia((*arvore)->direita)){
        percorre((*arvore)->direita);
        printf(")");
    }
}

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
    TipoArvore **arvore_15 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_16 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_17 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_18 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_19 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_20 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_21 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_22 = (TipoArvore **)malloc(sizeof(TipoArvore *));
    TipoArvore **arvore_23 = (TipoArvore **)malloc(sizeof(TipoArvore *));

    CriaArvoreBinariaVazia(arvore_01);
    CriaArvoreBinariaVazia(arvore_02);

    //sub-árvore a
    CriaArvoreBinariaVazia(arvore_03);
    TipoItem e3;
    e3.chave = 'a';
    CriaArvoreBinaria(e3, arvore_03, arvore_01, arvore_02);

    CriaArvoreBinariaVazia(arvore_04);
    CriaArvoreBinariaVazia(arvore_05);

    //sub-árvore b
    CriaArvoreBinariaVazia(arvore_06);
    TipoItem e6;
    e6.chave = 'b';
    CriaArvoreBinaria(e6, arvore_06, arvore_04, arvore_05);

    CriaArvoreBinariaVazia(arvore_07);

    CriaArvoreBinariaVazia(arvore_08);

    //sub-árvore c
    CriaArvoreBinariaVazia(arvore_09);
    TipoItem e9;
    e9.chave = 'c';
    CriaArvoreBinaria(e9, arvore_09, arvore_07, arvore_08);

    CriaArvoreBinariaVazia(arvore_10);
    CriaArvoreBinariaVazia(arvore_11);

    //sub-árvore d
    CriaArvoreBinariaVazia(arvore_12);
    TipoItem e12;
    e12.chave = 'd';
    CriaArvoreBinaria(e12, arvore_12, arvore_10, arvore_11);

    //árvore + direita
    CriaArvoreBinariaVazia(arvore_13);
    TipoItem e13;
    e13.chave = '+';
    CriaArvoreBinaria(e13, arvore_13, arvore_03, arvore_06);

    //árvore -
    CriaArvoreBinariaVazia(arvore_14);
    TipoItem e14;
    e14.chave = '-';
    CriaArvoreBinaria(e14, arvore_14, arvore_09, arvore_12);

    CriaArvoreBinariaVazia(arvore_16);
    CriaArvoreBinariaVazia(arvore_17);

    //árvore e
    CriaArvoreBinariaVazia(arvore_15);
    TipoItem e15;
    e15.chave = 'e';
    CriaArvoreBinaria(e15, arvore_15, arvore_16, arvore_17);

    CriaArvoreBinariaVazia(arvore_19);
    CriaArvoreBinariaVazia(arvore_20);

    //árvore f
    CriaArvoreBinariaVazia(arvore_18);
    TipoItem e18;
    e18.chave = 'f';
    CriaArvoreBinaria(e18, arvore_18, arvore_19, arvore_20);

    //árvore + esquerda
    CriaArvoreBinariaVazia(arvore_21);
    TipoItem e21;
    e21.chave = '+';
    CriaArvoreBinaria(e21, arvore_21, arvore_15, arvore_18);

    //árvore /
    CriaArvoreBinariaVazia(arvore_22);
    TipoItem e22;
    e22.chave = '/';
    CriaArvoreBinaria(e22, arvore_22, arvore_13, arvore_14);

    //árvore *
    CriaArvoreBinariaVazia(arvore_23);
    TipoItem e23;
    e23.chave = '*';
    CriaArvoreBinaria(e23, arvore_23, arvore_22, arvore_21);

    //percorre(arvore_23);

    printf("\n");
    ImprimeArvoreBinaria(arvore_23, 0);

    printf("\n");
    percorre(arvore_23);
    printf("\n");

    return 0;
}
