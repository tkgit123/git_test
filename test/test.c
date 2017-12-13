#include "../unity/src/unity.h"
#include "../src/functions.h"

/* Test the input */
void test_input(void) {
  TEST_ASSERT_TRUE(chk_input(0)); // If input is 0
  TEST_ASSERT_TRUE(chk_input(8)) ; // If input != 0
}


void test_add(void) {
  TEST_ASSERT_DOUBLE_WITHIN(delta, 6.0, add(3, 3));
}


void test_div(void) {
TEST_ASSERT_DOUBLE_WITHIN(delta, expected, div());
}


int main(void) {
  UNITY_BEGIN();
  //RUN_TEST(test_input);
  RUN_TEST(test_add);
  RUN_TEST(test_div);
  return UNITY_END();
}
