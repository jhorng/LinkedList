#include "AddList.h"
#include "ListElement.h"
#include "LinkedList.h"
#include "unity.h"




void setUp(void){}



void tearDown(void){}



void test_LinkedList_should_return_head_and_tail_be_NULL_or_0(){

  struct linkedList *newList;

  newList = createLinkedList();

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((newList -> head)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((newList -> tail)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

  if ((((newList)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)17);;};

}



void test_ListElement_should_return_next_as_NULL_and_value_as_1(){

  struct listElement *newElement;

  newElement = createListElement(1);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((newElement -> next)), (((void *)0)), (_U_UINT)23, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newElement -> value)), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

}



void test_LinkedList_given_1_should_return_both_head_and_tail_as_1(){

  struct linkedList *newList = createLinkedList();

  struct listElement *newElement = createListElement(1);



  addList(newList, newElement);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)33, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)34, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)35);;};

}



void test_LinkedList_given_1_and_3_should_return_head_as_1_and_tail_as_3(){

  struct linkedList *newList;

  struct listElement *newElement;



  newList = createLinkedList();

  addList(newList, createListElement(1));

  addList(newList, createListElement(3));



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)46, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)47, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)48);;};

}



void test_LinkedList_given_1_3_4_should_return_head_as_1_and_tail_as_4(){

  struct linkedList *newList;

  struct listElement *newElement;



  newList = createLinkedList();

  addList(newList, createListElement(1));

  addList(newList, createListElement(3));

  addList(newList, createListElement(4));



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)60, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)61, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)62);;};

}



void test_LinkedList_given_a_should_return_head_and_tail_as_a(){

  struct linkedList *newList;

  struct listElement *newElement;



  newList = createLinkedList();

  addList(newList, createListElement('a'));



  UnityAssertEqualNumber((_U_SINT)(('a')), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)72, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)(('a')), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)73, UNITY_DISPLAY_STYLE_INT);

}
