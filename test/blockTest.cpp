#include "../src/blocks.hpp"

#include "gtest/gtest.h"

TEST(FirstTest, ChooseBlockTestTrue)
{
    char testChar[3] = {'1', 'x', '4'};
    Blocks testChooseTrue;
    // expect method to return false (if input was correct, return false to exit while loop in main.cpp)
    EXPECT_EQ(testChooseTrue.userChooseBlock(testChar), false);
}

TEST(SecondTest, ChooseBlockTestFalse)
{
    char testChar[3] = {'a', 'x', '5'};
    Blocks testChooseFalse;
    // expect method to return true (if input was incorrect, return true to repeat while loop in main.cpp)
    EXPECT_EQ(testChooseFalse.userChooseBlock(testChar), true);
}

TEST(ThirdTest, SetBlockTestTrue)
{
    Blocks testSetTrue;
    int y = 1;
    int x = 1;
    char setBlockByUser[3] = {'1', 'x', '4'};
    testSetTrue.setPlayTemplate(1);
    testSetTrue.userChooseBlock(setBlockByUser);
    // expect method to return false (if input was correct, return false to exit while loop in main.cpp)
    EXPECT_EQ(testSetTrue.userSetBlock(y, x), false);
}

TEST(FourthTest, SetBlockTestFalse)
{
    Blocks testSetFalse;
    char blockbuffer = 'A';
    int y = 9;
    int x = 1;
    // expect method to return true (if input was incorrect, return true to repeat while loop in main.cpp)
    EXPECT_EQ(testSetFalse.userSetBlock(y, x), true);
}

TEST(FifthTest, RotateBlocksTestTrue)
{
    Blocks testRotateTrue;
    char yn = 'y';
    // expect method to return false to exit while loop in main.cpp
    EXPECT_EQ(testRotateTrue.rotateBlock(yn), false);
}

TEST(SixthTest, RotateBlocksTestFalse)
{
    Blocks testRotateFalse;
    char yn = '6';
    // expect method to return true to repeat while loop in main.cpp (since the user input for char yn was wrong)
    EXPECT_EQ(testRotateFalse.rotateBlock(yn), true);
}