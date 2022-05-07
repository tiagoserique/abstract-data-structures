
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
}


void testInsertInOrder(list_t *list){
	printf("============ listInsertInOrder ============\n");

}


void testInsertEnd(list_t *list){
	printf("============ listInsertEnd ============\n");

}


void testRemoveStart(list_t *list){
	printf("============ listRemoveStart ============\n");

}


void testRemoveEnd(list_t *list){
	printf("============ listRemoveEnd ============\n");

}


void testRemoveElement(list_t *list){
	printf("============ listRemoveElement ============\n");

}


void testIsIn(list_t *list){
	printf("============ listIsIn ============\n");

}

