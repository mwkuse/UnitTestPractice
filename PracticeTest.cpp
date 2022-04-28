/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// Throwing Smoke
TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

// allnighter Happy Tests
TEST(PracticeTest, sleep_test0)
{
    Practice testObject;
		int sleep[] = {0,0,0,0,0,0,0};
		int *ptr = testObject.allnighter(sleep);
		ASSERT_EQ(ptr, &sleep[0]);
}

TEST(PracticeTest,sleep_test_na)
{
	Practice testObject;
	int sleep[] = {1,2,3,4,5,6,7};
	int *ptr = testObject.allnighter(sleep);
	ASSERT_EQ(ptr, nullptr);
}

TEST(PracticeTest, sleep_test_mid)
{
	Practice testObject;
	int sleep[] = {1,2,3,0,5,6,7};
	int *ptr = testObject.allnighter(sleep);
	ASSERT_EQ(ptr, &sleep[3]);
}

// allnighter Sad Tests
TEST(PracticeTest, sleep_ne)
{
	Practice testObject;
	int sleep[] = {};
	int *ptr = testObject.allnighter(sleep);
	ASSERT_EQ(ptr, nullptr);
}

// count_starting_repeats Happy Tests
TEST(PracticeTest, zzz_repeats)
{
	Practice testObject;
	ASSERT_EQ(testObject.count_starting_repeats("zzz"), 3);
}

// isPalindrome Happy Tests
TEST(PracticeTest, racecar_test)
{
	Practice testObject;
	ASSERT_TRUE(testObject.isPalindrome("racecar"));
}

// isPalindrome Sad Test
TEST(PracticeTest, exclamition_test)
{
	Practice testObject;
	ASSERT_TRUE(testObject.isPalindrome("!tot!"));
}

TEST(PracticeTest, double_test)
{
	Practice testObject;
	ASSERT_TRUE(testObject.isPalindrome("aa"));
}
// sortDescending Happy Tests
TEST(PracticeTest, ascending)
{
	Practice testObject;
	int a = 1;
	int b = 2;
  int c = 3;
	testObject.sortDescending(a,b,c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 2);
	ASSERT_EQ(c, 1);
}

// sortDescending Sad Test
TEST(PracticeTest, outside_sort)
{
	Practice testObject;
	int a = 3;
	int b = 2;
  int c = 3;
	testObject.sortDescending(a,b,c);
	ASSERT_EQ(a, 3);
	ASSERT_EQ(b, 3);
	ASSERT_EQ(c, 2);
}
