#include "AddList.h"
#include "LinkedList.h"
#include "ListElement.h"
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void addList(struct linkedList *newList, struct listElement *newElement){
  if(newList -> head == NULL && newList -> tail == NULL){
    newList -> head = newElement;
    newList -> tail = newElement;
  }
  else{
    newList -> tail -> next = newElement;
    newList -> tail = newElement;
  }
}