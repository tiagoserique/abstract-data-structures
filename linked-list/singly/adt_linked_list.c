
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


int listInsertStart(list_t *list, int element){
	if ( listEmpty(list) ){
		list->start = listCreateNode(element);
		list->size++;
		return 1;
	}

	list_node_t *new_element = listCreateNode(element);
	if ( !new_element )
		return 0;

	list_node_t *aux = list->start;
	list->start = new_element;
	list->start->next = aux;
	list->size++;

	return 1;
}


int listInsertEnd(list_t *list, int element){
	if ( listEmpty(list) ){
		list->start = listCreateNode(element);
		list->size++;
		return 1;
	}

	list_node_t *new_element = listCreateNode(element);
	if ( !new_element )
		return 0;

	list_node_t *aux = list->start;

	while ( aux->next != NULL )
		aux = aux->next;

	aux->next = new_element;
	list->size++;

	return 1;
}


int listInsertInOrder(list_t *list, int element){

	return 0;
}


int listRemoveStart(list_t *list){
	if ( listEmpty(list) )
		return 0;


	list_node_t *aux = list->start;
	list->start = list->start->next;
	free(aux);

	list->size--;

	return 1;
}


int listRemoveEnd(list_t *list){
	if ( listEmpty(list) )
		return 0;

	list_node_t *prev_aux = list->start;
	list_node_t *aux;

	if ( prev_aux->next != NULL ){
		aux = prev_aux->next;

		while ( aux->next != NULL ){
			prev_aux = aux;
			aux = aux->next;
		}

		prev_aux->next = NULL;
		free(aux);
		aux = NULL;

	}
	else {
		free(prev_aux);
		list->start = prev_aux = NULL;
	}

	list->size--;

	return 1;
}


int listRemoveElement(list_t *list, int element){

	return 0;
}


int listIsIn(list_t *list, int element){
	return 0;
}


int listClear(list_t *list){

	return 0;
}
