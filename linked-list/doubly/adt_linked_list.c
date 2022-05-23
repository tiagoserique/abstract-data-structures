
#include <stdio.h>
#include <stdlib.h>
#include "adt_linked_list.h"


list_node_t *listCreateNode(int value);


list_t *listCreate();


void listPrint(list_t *list);


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
