#include "gtest/gtest.h"
#include "../src/field.hpp"

TEST(TenthTest, setBlockTestTrue)
{
    Field testSetTrue;
    testSetTrue.createField();
    int y = 1;
    int x = 1;
    char c = 'A';
    short blocksizeY = 4;
    short blocksizeX = 1;
    bool rotated = false;
    // expect method to return true (if input was correct, return true to tell method Template::pasteToTemplate() that the made move was valid)
    EXPECT_EQ(testSetTrue.setBlock(y, x, c, blocksizeX, blocksizeY, rotated), true);
}

TEST(EleventhTest, setBlockTestFalse)
{
    Field testSetFalse;
    testSetFalse.createField();
    int y = 1;
    int x = 9;
    char c = 'A';
    short blocksizeY = 4;
    short blocksizeX = 1;
    bool rotated = false;
    // expect method to return false (if input was incorrect, return false to tell method Template::pasteToTemplate() that the made move was invalid)
    EXPECT_EQ(testSetFalse.setBlock(y, x, c, blocksizeX, blocksizeY, rotated), false);
}