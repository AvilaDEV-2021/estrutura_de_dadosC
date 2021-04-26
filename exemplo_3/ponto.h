// TAD: Ponto (x,y)
// tipo exportado
typedef struct ponto Ponto;
/* OBS.: a composição de Ponto não é exportada pelo módulo, logo, os módulos que usarem Ponto não
   terão acesso aos campos da estrutura. Os clientes de Ponto só terão acesso às informações que
   possam ser obtidas através das funções exportadas pelo arquivo ponto.h. */

// funções exportadas
// função cria
// aloca e retorna um ponto com coordenadas (x,y)
Ponto* cria(float x, float y);

// função libera
// libera a memória de um ponto previamente criado.
void libera (Ponto* p);

// função acessa
// retorna os valores das coordenadas de um ponto
void acessa (Ponto* p, float* x, float* y);

// função atribui
// atribui novos valores às coordenadas de um ponto
void atribui (Ponto* p, float x, float y);

// função distancia
// retorna a distância entre dois pontos
float distancia (Ponto* p1, Ponto* p2);
