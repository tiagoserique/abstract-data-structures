
#include <stdio.h>
#include <stdlib.h>
#include "adt_linked_list.h"
#include "tests.h"

int main(){
	
	list_t *list = listCreate();

	testInsertStart(list);

	// testInsertInOrder(list);

	testInsertEnd(list);

	// testRemoveStart(list);

	// testRemoveEnd(list);

	// testRemoveElement(list);

	// testIsIn(list);

	return 0;
}