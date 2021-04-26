// TAD: Ponto (x,y)
// tipo exportado
typedef struct ponto Ponto;
/* OBS.: a composi��o de Ponto n�o � exportada pelo m�dulo, logo, os m�dulos que usarem Ponto n�o
   ter�o acesso aos campos da estrutura. Os clientes de Ponto s� ter�o acesso �s informa��es que
   possam ser obtidas atrav�s das fun��es exportadas pelo arquivo ponto.h. */

// fun��es exportadas
// fun��o cria
// aloca e retorna um ponto com coordenadas (x,y)
Ponto* cria(float x, float y);

// fun��o libera
// libera a mem�ria de um ponto previamente criado.
void libera (Ponto* p);

// fun��o acessa
// retorna os valores das coordenadas de um ponto
void acessa (Ponto* p, float* x, float* y);

// fun��o atribui
// atribui novos valores �s coordenadas de um ponto
void atribui (Ponto* p, float x, float y);

// fun��o distancia
// retorna a dist�ncia entre dois pontos
float distancia (Ponto* p1, Ponto* p2);
