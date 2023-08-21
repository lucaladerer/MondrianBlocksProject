#include "gtest/gtest.h"
#include "../src/rules.hpp"

TEST(FirstTestA, CheckLegalMoveTrue)
{
    Rules testRules;
    char testArray[8][8];
    for(int i = 0; i <= 7; i++)
    {
        for(int j = 0; j <= 7; j++)
        {
            testArray[i][j] = '0';
        }
    }
    int verPosTest = 1;
    int horPosTest = 1;
    EXPECT_EQ(testRules.checkLegalMove(testArray, verPosTest, horPosTest), true);
}

TEST(SecondTestA, checkLegalMoveFalse)
{
    Rules testRulesCollision;
    char testArray2[8][8];
    for(int i = 0; i <= 7; i++)
    {
        for(int j = 0; j <= 7; j++)
        {
            testArray2[i][j] = '0';
        }
    }
    testArray2[1][1] = 'X';
    int verPosTest2 = 1;
    int horPosTest2 = 1;
    EXPECT_EQ(testRulesCollision.checkLegalMove(testArray2, verPosTest2, horPosTest2), false);
}