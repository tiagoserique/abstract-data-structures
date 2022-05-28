
#include <stdio.h>
#include <stdlib.h>
#include "adt_linked_list.h"
#include "tests.h"

int main(){
	
	list_t *list = listCreate();

	testInsertStart(list);

	testInsertEnd(list);

	testInsertInOrder(list);

	testRemoveStart(list);

	testRemoveEnd(list);

	testInsertStart(list);

	testInsertEnd(list);

	testRemoveElement(list);

	testIsIn(list);

	testClear(list);

	return 0;
}