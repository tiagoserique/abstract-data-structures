
#include <stdio.h>
#include <stdlib.h>
#include "adt_linked_list.h"


list_node_t *listCreateNode(int value){
	list_node_t *node = (list_node_t *)malloc(sizeof(list_node_t));
	
	node->next = NULL;
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


int listEmpty(list_t *list){
	return listSize(list) == 0 ? 1 : 0;
}


int listSize(list_t *list){
	return list->size;
}


void listInsertStart(list_t *list, int element){

}


void listInsertEnd(list_t *list, int element){

}


void listInsertInOrder(list_t *list, int element){

}


void listRemoveStart(list_t *list){

}


void listRemoveEnd(list_t *list){

}


void listRemoveElement(list_t *list, int element){

}


int listIsIn(list_t *list, int element){

}
