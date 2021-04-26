//TADs lineares (lista, pilha e fila) com alocação sequencial (estática)

//define o número de elementos que podem ser inseridos nos TADs
#define TAM 1000

//tipo exportado
//define o TipoItem que é o tipo dos elementos dos TADs
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//-----TAD lista-----

//tipo exportado
//define o TipoLista que é o tipo do TAD lista
typedef struct
{
    TipoItem itens[TAM];
    int primeiro, ultimo;
}TipoLista;

//funções exportadas
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista);

//testa se a lista é vazia
int TestaListaVazia(TipoLista *lista);

//insere um elemento do tipo TipoItem na lista
void InsereLista(TipoLista *lista, TipoItem item);

//remove um elemento do tipo TipoItem da lista
void RemoveLista(TipoLista *lista, TipoItem *item, int pt);

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista);

//-----TAD pilha-----

//tipo exportado
//define o TipoPilha que é o tipo do TAD pilha
typedef struct
{
    TipoItem itens[TAM];
    int topo;
}TipoPilha;

//funções exportadas
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha);

//testa se a pilha é vazia
int TestaPilhaVazia(TipoPilha *pilha);

//insere um elemento do tipo TipoItem na pilha
void InserePilha(TipoPilha *pilha, TipoItem item);

//remove um elemento do tipo TipoItem da pilha
void RemovePilha(TipoPilha *pilha, TipoItem *item);

//imprime os elementos da pilha
void ImprimePilha(TipoPilha *pilha);

//-----TAD fila-----

//tipo exportado
//define o TipoFila que é o tipo do TAD fila
typedef struct
{
    TipoItem itens[TAM];
    int frente, tras;
}TipoFila;

//funções exportadas
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila);

//testa se a fila é vazia
int TestaFilaVazia(TipoFila *fila);

//insere um elemento do tipo TipoItem na fila
void InsereFila(TipoFila *fila, TipoItem item);

//remove um elemento do tipo TipoItem da fila
void RemoveFila(TipoFila *fila, TipoItem *item);

//imprime os elementos da fila
void ImprimeFila(TipoFila *fila);
