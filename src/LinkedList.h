#ifndef LinkedList_H
#define LinkedList_H
#include "ListElement.h"

struct linkedList *createLinkedList();

struct linkedList{
	struct listElement *head;
	struct listElement *tail;
};

#endif // LinkedList_H
