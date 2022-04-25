#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__


struct list_node {
	int value;
	void *next;
};

struct list {
	list_node_t *start;
	int length;
};


typedef struct list_node list_node_t;
typedef struct list list_t;


#endif