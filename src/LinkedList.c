#include "LinkedList.h"
#include "ListElement.h"
#include <malloc.h>
#include <stdio.h>

struct linkedList *createLinkedList(){
  struct linkedList *newList = (struct linkedList *)malloc(sizeof(struct linkedList));
  newList -> head = NULL;
  newList -> tail = NULL;
  return newList;
}