#include "AddList.h"
#include "ListElement.h"
#include "LinkedList.h"
#include "unity.h"




void setUp(void){}



void tearDown(void){}



void test_LinkedList_should_return_head_and_tail_be_NULL_or_0(){

  struct linkedList *newList = createLinkedList();

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((newList -> head)), (((void *)0)), (_U_UINT)15, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((newList -> tail)), (((void *)0)), (_U_UINT)16, UNITY_DISPLAY_STYLE_INT);

  if ((((newList)) != ((void *)0))) {} else {UnityFail( (" Expected Non-NULL"), (_U_UINT)(_U_UINT)(_U_UINT)17);;};

  printf("Head: %d\nTail: %d\n", newList -> head, newList -> tail);

}



void test_ListElement_should_return_next_as_0_and_value_as_1(){

  struct listElement *newElement;

  newElement = createListElement(1);

  UnityAssertEqualNumber((_U_SINT)((0)), (_U_SINT)((newElement -> next)), (((void *)0)), (_U_UINT)24, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newElement -> value)), (((void *)0)), (_U_UINT)25, UNITY_DISPLAY_STYLE_INT);

  printf("\nNext: %d\nValue: %d\n", newElement -> next, newElement -> value);

}



void test_LinkedList_given_1_should_return_both_head_and_tail_as_1(){

  struct linkedList *newList = createLinkedList();

  struct listElement *newElement = createListElement(1);



  addList(newList, newElement);



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)35, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)36, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)37);;};

  printf("\nHead: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value,

                                             newList -> tail -> value,

                                             newList -> tail -> next);

}



void test_LinkedList_given_1_and_3_should_return_head_as_1_and_tail_as_3(){

  struct linkedList *newList = newList = createLinkedList();



  addList(newList, createListElement(1));

  addList(newList, createListElement(3));



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)49, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)50, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)51);;};

  printf("\nHead: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value,

                                             newList -> tail -> value,

                                             newList -> tail -> next);

}



void test_LinkedList_given_1_3_4_should_return_head_as_1_and_tail_as_4(){

  struct linkedList *newList = createLinkedList();

  addList(newList, createListElement(1));

  addList(newList, createListElement(3));

  addList(newList, createListElement(4));



  UnityAssertEqualNumber((_U_SINT)((1)), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)63, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((3)), (_U_SINT)((newList -> head -> next -> value)), (((void *)0)), (_U_UINT)64, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((4)), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)65, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)66);;};

  printf("\nHead: %d\nNext: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value,

                                                       newList -> head -> next -> value,

                                                       newList -> tail -> value,

                                                       newList -> tail -> next);



}



void test_LinkedList_given_a_should_return_head_and_tail_as_a(){

  struct linkedList *newList = createLinkedList();



  char alpha = 'a';

  addList(newList, createListElement(alpha));



  UnityAssertEqualNumber((_U_SINT)(('a')), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)80, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)(('a')), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)81, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)82);;};

  printf("\nHead: %c\nTail: %c\nNextEnd: %d\n", newList -> head -> value,

                                             newList -> tail -> value,

                                             newList -> tail -> next);

}



void test_LinkedList_given_an_array_6_7_8_9_should_return_head_as_6_and_tail_as_9(){

  struct linkedList *newList = createLinkedList();



  int i;

  int num[4] = {6, 7, 8, 9};



  for (i=0; i<4; i++){

    addList(newList, createListElement(num[i]));

  }

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)97, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((7)), (_U_SINT)((newList -> head -> next -> value)), (((void *)0)), (_U_UINT)98, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((8)), (_U_SINT)((newList -> head -> next -> next -> value)), (((void *)0)), (_U_UINT)99, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((9)), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)100, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)101);;};

  printf("\nHead: %d\nNext1: %d\nNext2: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value,

                                                           newList -> head -> next -> value,

                                                           newList -> head -> next -> next -> value,

                                                           newList -> tail -> value,

                                                           newList -> tail -> next);

}



void test_LinkedList_user_given_5_numbers_should_return_5_numbers(){

  struct linkedList *newList = createLinkedList();



  int i, j;

  int num[5];



  printf("\nPlease enter 5 numbers\n");



  for (i=0; i<5; i++){

    scanf("%d\n", &j);

    printf("Number[%d]: %d\n", i+1, j);

    num[i] = j;

    addList(newList, createListElement(num[i]));

  }



  UnityAssertEqualNumber((_U_SINT)((num[0])), (_U_SINT)((newList -> head -> value)), (((void *)0)), (_U_UINT)124, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((num[1])), (_U_SINT)((newList -> head -> next -> value)), (((void *)0)), (_U_UINT)125, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((num[2])), (_U_SINT)((newList -> head -> next -> next -> value)), (((void *)0)), (_U_UINT)126, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((num[3])), (_U_SINT)((newList -> head -> next -> next -> next -> value)), (((void *)0)), (_U_UINT)127, UNITY_DISPLAY_STYLE_INT);

  UnityAssertEqualNumber((_U_SINT)((num[4])), (_U_SINT)((newList -> tail -> value)), (((void *)0)), (_U_UINT)128, UNITY_DISPLAY_STYLE_INT);

  if ((((newList -> tail -> next)) == ((void *)0))) {} else {UnityFail( (" Expected NULL"), (_U_UINT)(_U_UINT)(_U_UINT)129);;};

  printf("\nHead: %d\nNext1: %d\nNext2: %d\nNext3: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value,

                                                           newList -> head -> next -> value,

                                                           newList -> head -> next -> next -> value,

                                                           newList -> head -> next -> next -> next -> value,

                                                           newList -> tail -> value,

                                                           newList -> tail -> next);

}
