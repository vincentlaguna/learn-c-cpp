#include "Unity/src/unity.h"
#include <stdio.h>
#include <stdint.h>

int8_t AverageThreeBytes(int8_t a, int8_t b, int8_t c);

void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
  TEST_ASSERT_EQUAL_HEX(40, AverageThreeBytes(30, 40, 50));
  TEST_ASSERT_EQUAL_HEX(40, AverageThreeBytes(10, 70, 40));
  TEST_ASSERT_EQUAL_HEX(33, AverageThreeBytes(33, 33, 33));
}

void test_AverageThreeBytes_should_AverageHighValues(void)
{
TEST_ASSERT_EQUAL_HEX8(80, AverageThreeBytes(70, 80, 90));
TEST_ASSERT_EQUAL_HEX8(127, AverageThreeBytes(127, 127, 127));
TEST_ASSERT_EQUAL_HEX8(84, AverageThreeBytes(0, 126, 126));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
  RUN_TEST(test_AverageThreeBytes_should_AverageHighValues);
  return UNITY_END();
}

void setUp()
{
  printf("Test has initialized...\n");
}
void tearDown()
{
  printf("Test has completed.\n");
}