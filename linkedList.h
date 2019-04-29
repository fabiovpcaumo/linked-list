#include <stdbool.h>
#include "node.h"

typedef struct lista LinkedList;

//Cria uma lista vazia
LinkedList* createList();

//Insere um node no come�o da lista
LinkedList* insertNode(LinkedList* list, int data);

//Insere um node ap�s o node especificado
LinkedList* insertAfterSpecificNode(LinkedList* list, int data, int specificNode);

//Insere um node no final da lista
LinkedList* insertEndNode(LinkedList* list, int data);

//Remove um elemento da lista
LinkedList* deleteNode(LinkedList* list, int data);

//Encontra a posi��o de um Node da lista
int getNodePosition(LinkedList* list, int data);

//Encontra um node na lista
Node* findNode(LinkedList* list, int data);

//Printa o conte�do da lista
void printList(LinkedList* list);

//Verifica se a lista est� vazia
bool isEmpty(LinkedList* list);

//Conta o n�mero de elementos na lista
int count(LinkedList* list);
