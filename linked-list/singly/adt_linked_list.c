
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
	if ( listEmpty(list) ){
		list->start = listCreateNode(element);
		list->size++;
		return 1;
	}

	list_node_t *new_element = listCreateNode(element);
	if ( !new_element )
		return 0;

	list_node_t *aux = list->start;
	list_node_t *prev_aux = NULL;

	list->size++;

	while ( aux->next != NULL && aux->value < element ){
		prev_aux = aux;
		aux = aux->next; 
	}
	
	if ( aux->value >= element ){
		if ( prev_aux != NULL )
			prev_aux->next = new_element;
		else 
			list->start = new_element;
	 
		new_element->next = aux;
	}
	else if ( aux->next == NULL )
		aux->next = new_element;
	
	return 1;
}


int listRemoveStart(list_t *list){
	if ( listEmpty(list) )
		return 0;


	list_node_t *aux = list->start;
	list->start = list->start->next;
	free(aux);
	aux = NULL;

	list->size--;

	return 1;
}


int listRemoveEnd(list_t *list){
	if ( listEmpty(list) )
		return 0;

	list_node_t *prev_aux = NULL;
	list_node_t *aux = list->start;

	while ( aux->next != NULL ){
		prev_aux = aux;
		aux = aux->next;
	}

	if ( prev_aux != NULL )
		prev_aux->next = NULL;
	else 
		list->start = NULL;


	free(aux);
	aux = NULL;

	list->size--;

	return 1;
}


int listRemoveElement(list_t *list, int element){
	if ( listEmpty(list) )
		return 0;

	list_node_t *prev_aux = NULL;
	list_node_t *aux = list->start;

	while( aux->next != NULL && aux->value != element ){
		prev_aux = aux;
		aux = aux->next;
	}

	if ( aux->value == element ){
		if ( prev_aux != NULL )
			prev_aux->next = aux->next;
		else
			list->start = aux->next;

		free(aux);
		aux = NULL;

		list->size--;

		return 1;
	}

	return 0;
}


int listIsIn(list_t *list, int element){
	if ( listEmpty(list) )
		return 0;

	list_node_t *aux = list->start;

	while( aux != NULL ){
		if ( aux->value == element )
			return 1;

		aux = aux->next;
	}

	return 0;
}


int listClear(list_t *list){
	if ( listEmpty(list) )
		return 0;

	list_node_t *prev_aux = NULL;
	list_node_t *aux = list->start;

	while( aux != NULL ){
		prev_aux = aux;
		aux = aux->next;
		free(prev_aux);
	}

	list->start = NULL;
	list->size = 0;

	return 1;
}
