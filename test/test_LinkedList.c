#include "unity.h"
#include "LinkedList.h"
#include "ListElement.h"
#include "AddList.h"
#include <stdio.h>
#include <malloc.h>

void setUp(void){}

void tearDown(void){}

void test_LinkedList_should_return_head_and_tail_be_NULL_or_0(){
  struct linkedList *newList;
  newList = createLinkedList();
  TEST_ASSERT_EQUAL(0, newList -> head);
  TEST_ASSERT_EQUAL(0, newList -> tail);
  TEST_ASSERT_NOT_NULL(newList);
}

void test_ListElement_should_return_next_as_NULL_and_value_as_1(){
  struct listElement *newElement;
  newElement = createListElement(1);
  TEST_ASSERT_EQUAL(0, newElement -> next);
  TEST_ASSERT_EQUAL(1, newElement -> value);
}

void test_LinkedList_given_1_should_return_both_head_and_tail_as_1(){
  struct linkedList *newList = createLinkedList();
  struct listElement *newElement = createListElement(1);
  
  addList(newList, newElement);
  
  TEST_ASSERT_EQUAL(1, newList -> head -> value);
  TEST_ASSERT_EQUAL(1, newList -> tail -> value);
  TEST_ASSERT_NULL(newList -> tail -> next);
}

void test_LinkedList_given_1_and_3_should_return_head_as_1_and_tail_as_3(){
  struct linkedList *newList;
  struct listElement *newElement;
  
  newList = createLinkedList();
  addList(newList, createListElement(1));
  addList(newList, createListElement(3));
  
  TEST_ASSERT_EQUAL(1, newList -> head -> value);
  TEST_ASSERT_EQUAL(3, newList -> tail -> value);
  TEST_ASSERT_NULL(newList -> tail -> next);
}

void test_LinkedList_given_1_3_4_should_return_head_as_1_and_tail_as_4(){
  struct linkedList *newList;
  struct listElement *newElement;
  
  newList = createLinkedList();
  addList(newList, createListElement(1));
  addList(newList, createListElement(3));
  addList(newList, createListElement(4));
  
  TEST_ASSERT_EQUAL(1, newList -> head -> value);
  TEST_ASSERT_EQUAL(4, newList -> tail -> value);
  TEST_ASSERT_NULL(newList -> tail -> next);
}

void test_LinkedList_given_a_should_return_head_and_tail_as_a(){
  struct linkedList *newList;
  struct listElement *newElement;
  
  newList = createLinkedList();
  addList(newList, createListElement('a'));
  
  TEST_ASSERT_EQUAL('a', newList -> head -> value);
  TEST_ASSERT_EQUAL('a', newList -> tail -> value);
} 