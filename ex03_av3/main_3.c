#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "TAD_arvore_binaria_aloc_enc.h"

void percorreA(TipoArvore **arvore){

if(!TestaArvoreBinariaVazia(arvore)){
    percorreB((*arvore)->esquerda);
    percorreA((*arvore)->direita);
    printf("%c", (*arvore)->item.chave);
}

}

 void percorreB(TipoArvore **arvore){

 if(!TestaArvoreBinariaVazia(arvore)){
    printf("%c", (*arvore)->item.chave);
    percorreA((*arvore)->esquerda);
    percorreB((*arvore)->direita);
 }

 }

int main(void)
{
    setlocale(LC_ALL, "");

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

    CriaArvoreBinariaVazia(arvore_01);

    CriaArvoreBinariaVazia(arvore_02);

    //sub-árvore G
    CriaArvoreBinariaVazia(arvore_03);
    TipoItem e1;
    e1.chave = 'G';
    CriaArvoreBinaria(e1, arvore_03, arvore_01, arvore_02);

    CriaArvoreBinariaVazia(arvore_04);

    CriaArvoreBinariaVazia(arvore_05);

    //sub-árvore H
    CriaArvoreBinariaVazia(arvore_06);
    TipoItem e2;
    e2.chave = 'H';
    CriaArvoreBinaria(e2, arvore_06, arvore_04, arvore_05);

    CriaArvoreBinariaVazia(arvore_07);

    CriaArvoreBinariaVazia(arvore_08);

    //sub-árvore I
    CriaArvoreBinariaVazia(arvore_09);
    TipoItem e3;
    e3.chave = 'I';
    CriaArvoreBinaria(e3, arvore_09, arvore_07, arvore_08);

    CriaArvoreBinariaVazia(arvore_10);

    //sub-árvore D
    CriaArvoreBinariaVazia(arvore_11);
    TipoItem e4;
    e4.chave = 'D';
    CriaArvoreBinaria(e4, arvore_11, arvore_10, arvore_03);

    //sub-árvore E
    CriaArvoreBinariaVazia(arvore_12);
    TipoItem e5;
    e5.chave = 'E';
    CriaArvoreBinaria(e5, arvore_12, arvore_06, arvore_09);

    CriaArvoreBinariaVazia(arvore_13);

    CriaArvoreBinariaVazia(arvore_14);

    //sub-árvore F
    CriaArvoreBinariaVazia(arvore_15);
    TipoItem e6;
    e6.chave = 'F';
    CriaArvoreBinaria(e6, arvore_15, arvore_13, arvore_14);

    CriaArvoreBinariaVazia(arvore_16);

    //sub-árvore B
    CriaArvoreBinariaVazia(arvore_17);
    TipoItem e7;
    e7.chave = 'B';
    CriaArvoreBinaria(e7, arvore_17, arvore_11, arvore_16);

    //sub-árvore C
    CriaArvoreBinariaVazia(arvore_18);
    TipoItem e8;
    e8.chave = 'C';
    CriaArvoreBinaria(e8, arvore_18, arvore_12, arvore_15);

    //sub-árvore A
    CriaArvoreBinariaVazia(arvore_19);
    TipoItem e9;
    e9.chave = 'A';
    CriaArvoreBinaria(e9, arvore_19, arvore_17, arvore_18);

    printf("\n");
    ImprimeArvoreBinaria(arvore_19, 0);

    printf("\n");

    percorreA(arvore_19);

    return 0;
}


