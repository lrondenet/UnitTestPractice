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

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("#$#");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_lessthan)
{
    Practice obj;
    obj.sortDescending(3,2,1);
    ASSERT_LT(1,3);
    
}

TEST(PracticeTest, is_greaterthan)
{
    Practice obj;
    obj.sortDescending(3,2,1);
    ASSERT_GT(3,1);
    ASSERT_GT(3,2);
}

TEST(PracticeTest, is_equal)
{
    Practice obj;
    obj.sortDescending(3,2,1);
    ASSERT_EQ(1,3);
}


// TEST(PracticeTest, is_equal)
// {
//     Practice obj;
//     obj.sortDescending(3,3,3);
//     ASSERT_EQ(3,3);
// }


TEST(PracticeTest, negativeintegers)
{
    Practice obj;
    obj.sortDescending(-1,-2,-3);
    ASSERT_LT(-3,-2);
    ASSERT_LT(-2,-1);
}


