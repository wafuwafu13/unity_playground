#include "sample.h"
#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(Sample);

TEST_SETUP(Sample)
{
}

TEST_TEAR_DOWN(Sample)
{
}

TEST(Sample, SampleMax) {
  /* All of these should pass */
  TEST_ASSERT_EQUAL(2, max(2, 1));
}
