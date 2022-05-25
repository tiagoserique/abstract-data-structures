#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__


/*================================== TYPEDEFS ================================*/


typedef struct list_node_t list_node_t;
typedef struct list_t list_t;

/*=================================== STRUCTS ================================*/


struct list_node_t {
	int value;
	void *next;
};


struct list_t {
	list_node_t *start;
	int size;
};


/*=================================== HEADERS ================================*/


// create a node with the value received as a parameter
list_node_t *listCreateNode(int value);


// create an empty list and return
list_t *listCreate();


// print the list from beginning to end
void listPrint(list_t *list);


// returns 1 if the list is empty and 0 otherwise
int listEmpty(list_t *list);


// returns the size of the list
int listSize(list_t *list);


// inserts the element 'element' at the beginning of the list  
// returns 1 if the operation was successful and 0 otherwise
int listInsertStart(list_t *list, int element);


// inserts the element 'element' at the end of the list 
// returns 1 if the operation was successful and 0 otherwise
int listInsertEnd(list_t *list, int element);


// inserts the element 'element' into the list ensuring sorting in ascending order 
// returns 1 if the operation was successful and 0 otherwise
int listInsertInOrder(list_t *list, int element);


// removes the first element of the list 
// returns 1 if the operation was successful and 0 otherwise
int listRemoveStart(list_t *list);


// removes the last element of the list 
// returns 1 if the operation was successful and 0 otherwise
int listRemoveEnd(list_t *list);


// removes the element 'element' if it exists in the list
// returns 1 if the operation was successful and 0 otherwise
int listRemoveElement(list_t *list, int element);


// returns 1 if the element 'element' exists in the list and 0 otherwise
int listIsIn(list_t *list, int element);


// returns 1 if the operation was successful and 0 otherwise
int listClear(list_t *list);


#endif