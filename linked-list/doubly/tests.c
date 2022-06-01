
#include <stdio.h>
#include "tests.h"


void testInsertStart(list_t *list){
	printf("============ listInsertStart ============\n");

	listInsertStart(list, 10);
	listPrint(list);

	listInsertStart(list, 11);
	listPrint(list);
	
	listInsertStart(list, 12);
	listPrint(list);
	
	listInsertStart(list, 13);
	listPrint(list);

	listPrintInvert(list);
}


void testInsertInOrder(list_t *list){
	printf("============ listInsertInOrder ============\n");

	listInsertInOrder(list, 19);
	listPrint(list);

	listInsertInOrder(list, 30);
	listPrint(list);
	
	listInsertInOrder(list, 15);
	listPrint(list);
	
	listInsertInOrder(list, 21);
	listPrint(list);

	listPrintInvert(list);
}


void testInsertEnd(list_t *list){
	printf("============ listInsertEnd ============\n");

	listInsertEnd(list, 20);
	listPrint(list);

	listInsertEnd(list, 21);
	listPrint(list);
	
	listInsertEnd(list, 22);
	listPrint(list);
	
	listInsertEnd(list, 23);
	listPrint(list);

	listPrintInvert(list);
}


void testRemoveStart(list_t *list){
	printf("============ listRemoveStart ============\n");

	listRemoveStart(list);
	listPrint(list);

	listRemoveStart(list);
	listPrint(list);

	listRemoveStart(list);
	listPrint(list);

	listPrintInvert(list);
}


void testRemoveEnd(list_t *list){
	printf("============ listRemoveEnd ============\n");

	listRemoveEnd(list);
	listPrint(list);

	listRemoveEnd(list);
	listPrint(list);

	listRemoveEnd(list);
	listPrint(list);

	listRemoveEnd(list);
	listPrint(list);

	listRemoveEnd(list);
	listPrint(list);

	listPrintInvert(list);
}


void testRemoveElement(list_t *list){
	printf("============ listRemoveElement ============\n");

	listRemoveElement(list, 20);
	listPrint(list);

	listRemoveElement(list, 13);
	listPrint(list);

	listRemoveElement(list, 11);
	listPrint(list);

	listRemoveElement(list, 12);
	listPrint(list);

	listRemoveElement(list, 10);
	listPrint(list);

	listRemoveElement(list, 23);
	listPrint(list);

	listRemoveElement(list, 30);
	listPrint(list);

	listPrintInvert(list);
}


void testIsIn(list_t *list){
	printf("============ listIsIn ============\n");

	if ( listIsIn(list, 20) )
		printf("The element is in list\n");
	else
		printf("The element is not in list\n");

	if ( listIsIn(list, 21) )
		printf("The element is in list\n");
	else
		printf("The element is not in list\n");

	if ( listIsIn(list, 10) )
		printf("The element is in list\n");
	else
		printf("The element is not in list\n");

	if ( listIsIn(list, 22) )
		printf("The element is in list\n");
	else
		printf("The element is not in list\n");

	listPrint(list);

	listPrintInvert(list);
}


void testClear(list_t *list){
	printf("============ listClear ============\n");
	
	listClear(list);

	listPrint(list);

	listPrintInvert(list);
}
