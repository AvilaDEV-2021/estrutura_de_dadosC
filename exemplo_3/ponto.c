#include <stdlib.h>  // malloc, free, exit
#include <stdio.h>   // printf
#include <math.h>    // sqrt
#include "ponto.h"
/*OBS.: razões para incluir ponto.h em ponto.c
  1 - podem existir definições na interface que são necessárias na implementação (ex: tipo Ponto);
  2 - garantir que as funções implementadas correspondam às funções da interface.
*/

struct ponto
{
    float x;
    float y;
};

Ponto * cria(float x, float y)
{
    Ponto *p = (Ponto *)malloc(sizeof(Ponto));

    if (p == NULL)
    {
        printf("Mem\242ria insuficiente!\n");
        exit(1);
    }
    p->x = x;
    p->y = y;

    return p;
}

void libera(Ponto *p)
{
    free(p);
}

void acessa(Ponto *p, float *x, float *y)
{
    *x = p->x;
    *y = p->y;
}

void atribui(Ponto *p, float x, float y)
{
    p->x = x;
    p->y = y;
}

float distancia(Ponto *p1, Ponto *p2)
{
    float dx, dy;

    dx = p2->x - p1->x;
    dy = p2->y - p1->y;

    return sqrt(dx * dx + dy * dy);
}
