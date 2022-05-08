
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

	list_node_t *inicio_lista = list->start;
	list->start = new_element;
	list->start->next = inicio_lista;
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

	list_node_t *inicio_lista = list->start;

	while ( inicio_lista->next != NULL ){
		inicio_lista = inicio_lista->next;
	}

	inicio_lista->next = new_element;
	list->size++;

	return 1;
}


int listInsertInOrder(list_t *list, int element){

	return 0;
}


int listRemoveStart(list_t *list){

	return 0;
}


int listRemoveEnd(list_t *list){

	return 0;
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
