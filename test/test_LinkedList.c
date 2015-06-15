#include "unity.h"
#include "LinkedList.h"
#include "ListElement.h"
#include "AddList.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void setUp(void){}

void tearDown(void){}

void test_LinkedList_should_return_head_and_tail_be_NULL_or_0(){
  struct linkedList *newList = createLinkedList();
  TEST_ASSERT_EQUAL(0, newList -> head);
  TEST_ASSERT_EQUAL(0, newList -> tail);
  TEST_ASSERT_NOT_NULL(newList);
  printf("Head: %d\nTail: %d\n", newList -> head, newList -> tail);
}

void test_ListElement_should_return_next_as_0_and_value_as_1(){
  struct listElement *newElement;
  newElement = createListElement(1);
  TEST_ASSERT_EQUAL(0, newElement -> next);
  TEST_ASSERT_EQUAL(1, newElement -> value);
  printf("\nNext: %d\nValue: %d\n", newElement -> next, newElement -> value);
}

void test_LinkedList_given_1_should_return_both_head_and_tail_as_1(){
  struct linkedList *newList = createLinkedList();
  struct listElement *newElement = createListElement(1);
  
  addList(newList, newElement);
  
  TEST_ASSERT_EQUAL(1, newList -> head -> value);
  TEST_ASSERT_EQUAL(1, newList -> tail -> value);
  TEST_ASSERT_NULL (newList -> tail -> next);
  printf("\nHead: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value, 
                                             newList -> tail -> value, 
                                             newList -> tail -> next); 
}

void test_LinkedList_given_1_and_3_should_return_head_as_1_and_tail_as_3(){
  struct linkedList *newList = newList = createLinkedList();
  
  addList(newList, createListElement(1));
  addList(newList, createListElement(3));
  
  TEST_ASSERT_EQUAL(1, newList -> head -> value);
  TEST_ASSERT_EQUAL(3, newList -> tail -> value);
  TEST_ASSERT_NULL (newList -> tail -> next);
  printf("\nHead: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value, 
                                             newList -> tail -> value, 
                                             newList -> tail -> next);
}

void test_LinkedList_given_1_3_4_should_return_head_as_1_and_tail_as_4(){
  struct linkedList *newList = createLinkedList();
  addList(newList, createListElement(1));
  addList(newList, createListElement(3));
  addList(newList, createListElement(4));
  
  TEST_ASSERT_EQUAL(1, newList -> head -> value);
  TEST_ASSERT_EQUAL(3, newList -> head -> next -> value);
  TEST_ASSERT_EQUAL(4, newList -> tail -> value);
  TEST_ASSERT_NULL (newList -> tail -> next);
  printf("\nHead: %d\nNext: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value, 
                                                       newList -> head -> next -> value,
                                                       newList -> tail -> value, 
                                                       newList -> tail -> next);

}

void test_LinkedList_given_a_should_return_head_and_tail_as_a(){
  struct linkedList *newList = createLinkedList();
  
  char alpha = 'a';
  addList(newList, createListElement(alpha));
  
  TEST_ASSERT_EQUAL('a', newList -> head -> value);
  TEST_ASSERT_EQUAL('a', newList -> tail -> value);
  TEST_ASSERT_NULL (newList -> tail -> next);
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
  TEST_ASSERT_EQUAL(6, newList -> head -> value);
  TEST_ASSERT_EQUAL(7, newList -> head -> next -> value);
  TEST_ASSERT_EQUAL(8, newList -> head -> next -> next -> value);
  TEST_ASSERT_EQUAL(9, newList -> tail -> value);
  TEST_ASSERT_NULL (newList -> tail -> next);
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
  
  TEST_ASSERT_EQUAL(num[0], newList -> head -> value);
  TEST_ASSERT_EQUAL(num[1], newList -> head -> next -> value);
  TEST_ASSERT_EQUAL(num[2], newList -> head -> next -> next -> value);
  TEST_ASSERT_EQUAL(num[3], newList -> head -> next -> next -> next -> value);
  TEST_ASSERT_EQUAL(num[4], newList -> tail -> value);
  TEST_ASSERT_NULL (newList -> tail -> next);
  printf("\nHead: %d\nNext1: %d\nNext2: %d\nNext3: %d\nTail: %d\nNextEnd: %d\n", newList -> head -> value, 
                                                           newList -> head -> next -> value,
                                                           newList -> head -> next -> next -> value,
                                                           newList -> head -> next -> next -> next -> value,
                                                           newList -> tail -> value,
                                                           newList -> tail -> next); 
}