#include "Unity/src/unity.h"
#include <stdio.h>
#include <stdlib.h>

TEST(sprintf, NoFormatOperations)
{
  char output[5] = "";
  TEST_ASSERT_EQUAL(3, sprintf(output, "hey"));
  TEST_ASSERT_EQUAL_STRING("hey", output);
}