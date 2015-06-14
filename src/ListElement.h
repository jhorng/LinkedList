#ifndef ListElement_H
#define ListElement_H

struct listElement *createListElement(int value);

struct listElement{
	struct listElement *next;
  int value;
};

#endif // ListElement_H
