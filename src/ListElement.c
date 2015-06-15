#include "ListElement.h"
#include <malloc.h>
#include <stdio.h>

struct listElement *createListElement(int value){
  struct listElement *newElement = (struct listElement *)malloc(sizeof(struct listElement));
    newElement -> next = NULL;
    newElement -> value = value;
    return newElement;
}