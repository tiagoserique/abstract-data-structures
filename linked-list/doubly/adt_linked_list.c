
#include <stdio.h>
#include <stdlib.h>
#include "adt_linked_list.h"


list_node_t *listCreateNode(int value){
	list_node_t *node = (list_node_t *)malloc(sizeof(list_node_t));

	node->next = NULL;
	node->prev = NULL;
	node->value = value;

	return node;
}


list_t *listCreate(){
	list_t *list = (list_t *)malloc(sizeof(list_t));

	list->size = 0;
	list->start = NULL;

	return list;
}


void listPrint(list_t *list){
	if ( listEmpty(list) ){
		printf("list is empty\n");
		return;
	}

	list_node_t *aux = list->start;

	while ( aux != NULL ){
		printf("%d ", aux->value);

		aux = aux->next;
	}

	printf("\n");
}


int listEmpty(list_t *list);


int listSize(list_t *list);


int listInsertStart(list_t *list, int element);


int listInsertEnd(list_t *list, int element);


int listInsertInOrder(list_t *list, int element);


int listRemoveStart(list_t *list);


int listRemoveEnd(list_t *list);


int listRemoveElement(list_t *list, int element);


int listIsIn(list_t *list, int element);


int listClear(list_t *list);
