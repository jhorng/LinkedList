/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_LinkedList_should_return_head_and_tail_be_NULL_or_0(void);
extern void test_ListElement_should_return_next_as_0_and_value_as_1(void);
extern void test_LinkedList_given_1_should_return_both_head_and_tail_as_1(void);
extern void test_LinkedList_given_1_and_3_should_return_head_as_1_and_tail_as_3(void);
extern void test_LinkedList_given_1_3_4_should_return_head_as_1_and_tail_as_4(void);
extern void test_LinkedList_given_a_should_return_head_and_tail_as_a(void);
extern void test_LinkedList_given_an_array_6_7_8_9_should_return_head_as_6_and_tail_as_9(void);
extern void test_LinkedList_user_given_5_numbers_should_return_5_numbers(void);


//=======Test Reset Option=====
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  UnityBegin("test_LinkedList.c");
  RUN_TEST(test_LinkedList_should_return_head_and_tail_be_NULL_or_0, 13);
  RUN_TEST(test_ListElement_should_return_next_as_0_and_value_as_1, 21);
  RUN_TEST(test_LinkedList_given_1_should_return_both_head_and_tail_as_1, 29);
  RUN_TEST(test_LinkedList_given_1_and_3_should_return_head_as_1_and_tail_as_3, 43);
  RUN_TEST(test_LinkedList_given_1_3_4_should_return_head_as_1_and_tail_as_4, 57);
  RUN_TEST(test_LinkedList_given_a_should_return_head_and_tail_as_a, 74);
  RUN_TEST(test_LinkedList_given_an_array_6_7_8_9_should_return_head_as_6_and_tail_as_9, 88);
  RUN_TEST(test_LinkedList_user_given_5_numbers_should_return_5_numbers, 109);

  return (UnityEnd());
}
