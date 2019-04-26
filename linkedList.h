#include <stdbool.h>
#include "node.h"

typedef struct lista LinkedList;

//Cria uma lista vazia
LinkedList* createList();

//Insere um node no come�o da lista
LinkedList* insertNode(LinkedList* list, int data);

//Insere um node no final da lista
LinkedList* insertEndNode(LinkedList* list, int data);

//Remove um elemento da lista
LinkedList* deleteNode(LinkedList* list, int data);

//Encontra um elemento da lista
Node* find(LinkedList* list, int data);

//Printa o conte�do da lista
void printList(LinkedList* list);

//Verifica se a lista est� vazia
bool isEmpty(LinkedList* list);
