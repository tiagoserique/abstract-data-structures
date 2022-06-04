
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
	list->end = NULL;
	
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


void listPrintInvert(list_t *list){
	if ( listEmpty(list) ){
		printf("list is empty\n");
		return;
	}

	list_node_t *aux = list->end;

	while ( aux != NULL ){
		printf("%d ", aux->value);

		aux = aux->prev;
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
		list->end = list->start;
		list->size++;
		
		return 1;
	}

	list_node_t *new_element = listCreateNode(element);
	if ( !new_element )
		return 0;

	list->start->prev = new_element;
	new_element->next = list->start;
	list->start = new_element;
	list->size++;

	return 1;
}


int listInsertEnd(list_t *list, int element){
	if ( listEmpty(list) ){
		list->start = listCreateNode(element);
		list->end = list->start;
		list->size++;
		
		return 1;
	}

	list_node_t *new_element = listCreateNode(element);
	if ( !new_element )
		return 0;

	list->end->next = new_element;
	new_element->prev = list->end;
	list->end = new_element;

	list->size++;

	return 1;
}


int listInsertInOrder(list_t *list, int element){
	if ( listEmpty(list) ){
		list->start = listCreateNode(element);
		list->end = list->start;
		list->size++;
		
		return 1;
	}

	list_node_t *new_element = listCreateNode(element);
	if ( !new_element )
		return 0;

	list_node_t *aux = list->start;

	list->size++;

	while ( aux != list->end && aux->value < element ){
		aux = aux->next; 
	}
	
	if ( aux->value >= element ){
		if ( aux->prev == NULL )
			list->start = new_element;
		else {
			new_element->prev = aux->prev;
			aux->prev->next = new_element;
		}
		
		new_element->next = aux;
		aux->prev = new_element;
	}
	else if ( aux == list->end ){
		aux->next = new_element;
		new_element->prev = aux;
		list->end = new_element;
	}

	return 1;
}


int listRemoveStart(list_t *list){
	if ( listEmpty(list) )
		return 0;

	list_node_t *aux = list->start;
	list->start = list->start->next;
	list->start->prev = NULL;
	
	aux->next = NULL;
	free(aux);
	aux = NULL;

	list->size--;

	return 1;
}


int listRemoveEnd(list_t *list){
	if ( listEmpty(list) )
		return 0;


	if ( list->start == list->end ){
		free(list->end);
		list->start = list->end = NULL;

	}
	else {
		list_node_t *aux = list->end;
		list->end = list->end->prev;
		list->end->next = NULL; 
		
		aux->prev = NULL;
		free(aux);
		aux = NULL;
	}

	list->size--;

	return 1;
}


int listRemoveElement(list_t *list, int element){
	return 0;
}


int listIsIn(list_t *list, int element){
	if ( listEmpty(list) )
		return 0;

	list_node_t *aux_start = list->start;
	list_node_t *aux_end = list->end;

	while( aux_start <= aux_end ){
		if ( aux_start->value == element || aux_end->value == element )
			return 1;

		aux_start = aux_start->next;
		aux_end = aux_end->prev;
	}

	if ( aux_start->value == element )
		return 1;

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


void listDestroy(list_t *list){
	listClear(list);
	free(list);

	return;
}
