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
	int length;
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
void listSize();


// 
void listInsertionStart();


// 
void listInsertionEnd();


// 
void listInsertionOrded();


// 
void listDeletionStart();


// 
void listDeletionEnd();


// 
void listDeletionElement();


// 
void listBelong();



#endif