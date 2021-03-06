#include <stdio.h>
#include <stdbool.h>
#include "linkedList.h"
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	LinkedList* linkedList;
	linkedList = createList();
	printf("%s", isEmpty(linkedList) ? "true": "false");
	
	printList(linkedList);
	
	insertNode(linkedList, 3);
	printList(linkedList);
	
	insertNode(linkedList, 5);
	printList(linkedList);
	
	insertEndNode(linkedList, 99);
	insertNode(linkedList, 7);
	printList(linkedList);
	
	insertEndNode(linkedList, 9932);
	printList(linkedList);
	
	getNodePosition(linkedList, 99);
	insertAfterSpecificNode(linkedList, 84, 5);
	printList(linkedList);
	
	
	printList(linkedList);
	
	deleteList(linkedList);
	printList(linkedList);
	printf("%s", isEmpty(linkedList) ? "\nA lista est� vazia.\n": "\nExistem elementos na lista.\n");	
	printf("%p", linkedList);
	
}
