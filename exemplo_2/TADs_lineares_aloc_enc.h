//TADs lineares (lista, pilha e fila) com aloca��o encadeada (din�mica)

//tipo exportado
//define o TipoItem que � o tipo dos elementos dos TADs
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//tipo exportado
//define o TipoCelula que � o tipo das c�lulas que cont�m os elementos que s�o manipulados pelos TADs
typedef struct celula
{
    TipoItem item;
    struct celula *proximo;
}TipoCelula;

//-----TAD lista-----

//tipo exportado
//define o TipoLista que � o tipo do TAD lista
typedef struct
{
    TipoCelula *primeiro;
    TipoCelula *ultimo;
}TipoLista;

//fun��es exportadas
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista);

//testa se a lista � vazia
int TestaListaVazia(TipoLista *lista);

//insere um elemento do tipo TipoItem na lista
void InsereLista(TipoLista *lista, TipoItem item);

//remove um elemento do tipo TipoItem da lista
void RemoveLista(TipoLista *lista, TipoItem *item, TipoCelula *pt);

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista);

//-----TAD pilha-----

//tipo exportado
//define o TipoPilha que � o tipo do TAD pilha
typedef struct
{
    TipoCelula *topo;
    TipoCelula *fundo;
}TipoPilha;

//fun��es exportadas
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha);

//testa se a pilha � vazia
int TestaPilhaVazia(TipoPilha *pilha);

//insere um elemento do tipo TipoItem na pilha
void InserePilha(TipoPilha *pilha, TipoItem item);

//remove um elemento do tipo TipoItem da pilha
void RemovePilha(TipoPilha *pilha, TipoItem *item);

//imprime os elementos da pilha
void ImprimePilha(TipoPilha *pilha);

//-----TAD fila-----

//tipo exportado
//define o TipoFila que � o tipo do TAD fila
typedef struct
{
    TipoCelula *frente;
    TipoCelula *tras;
}TipoFila;

//fun��es exportadas
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila);

//testa se a fila � vazia
int TestaFilaVazia(TipoFila *fila);

//insere um elemento do tipo TipoItem na fila
void InsereFila(TipoFila *fila, TipoItem item);

//remove um elemento do tipo TipoItem da fila
void RemoveFila(TipoFila *fila, TipoItem *item);

//imprime os elementos da fila
void ImprimeFila(TipoFila *fila);
