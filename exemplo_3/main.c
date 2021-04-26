#include <stdio.h>
#include "ponto.h"

void main(void)
{
    float p1x = 4.5, p1y = 3.2;
    float p2x = 5.7, p2y = 9.4;
    float x1, x2, y1, y2;

    Ponto *p1 = cria(p1x, p1y);
    Ponto *p2 = cria(p2x, p2y);

    acessa(p1, &x1, &y1);
    printf("\nCoordenadas do ponto 1: %.2f, %.2f\n", x1, y1);
    acessa(p2, &x2, &y2);
    printf("\nCoordenadas do ponto 2: %.2f, %.2f\n", x2, y2);

    atribui(p1, 2.3, 7.5);
    acessa(p1, &x1, &y1);
    printf("\nNovas coordenadas do ponto 1: %.2f, %.2f\n", x1, y1);

    atribui(p2, 1.8, 6.4);
    acessa(p2, &x2, &y2);
    printf("\nNovas coordenadas do ponto 2: %.2f, %.2f\n", x2, y2);

    printf("\nDist\203ncia entre os pontos 1 e 2: %.2f\n", distancia(p1, p2));

    libera(p1);
    libera(p2);
}
