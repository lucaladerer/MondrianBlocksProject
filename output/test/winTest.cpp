#include "gtest/gtest.h"
#include "../src/win.hpp"

TEST(FirstTestC, TestCheckWinTrue)
{
    Win testWin;
    char testArrayEmpty [8][8];
    for(int i = 0; i <= 7; i++)
    {
        for(int j = 0; j <= 7; j++)
        {
            testArrayEmpty[i][j] = '0';
        }
    }
    EXPECT_EQ(testWin.checkForWin(testArrayEmpty), false);
}

TEST(SecondTestC, TestCheckWinFalse)
{
    Win testWin2;
    char testArrayEmpty2 [8][8];
    for(int i = 0; i <= 7; i++)
    {
        for(int j = 0; j <= 7; j++)
        {
            testArrayEmpty2[i][j] = 'X';
        }
    }
    EXPECT_EQ(testWin2.checkForWin(testArrayEmpty2), true);
}