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


// 
list_node_t *listCreateNode(int value);


// 
list_t *listCreate();


// 
void listPrint(list_t *list);


// 
int listEmpty(list_t *list);


// 
int listSize(list_t *list);


// 
void listInsertStart(list_t *list, int element);


// 
void listInsertEnd(list_t *list, int element);


// 
void listInsertInOrder(list_t *list, int element);


// 
void listRemoveStart(list_t *list);


// 
void listRemoveEnd(list_t *list);


// 
void listRemoveElement(list_t *list, int element);


// 
int listIsIn(list_t *list, int element);



#endif