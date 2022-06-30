#include "sample.h"
#include "unity.h"

/* sometimes you may want to get at local data in a module.
 * for example: If you plan to pass by reference, this could be useful
 * however, it should often be avoided */
extern int Counter;

void setUp(void)
{
}

void tearDown(void)
{
}

void test_max(void)
{
  /* All of these should pass */
  TEST_ASSERT_EQUAL(78, max(78, 1));
}
