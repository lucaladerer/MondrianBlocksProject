#include "gtest/gtest.h"
#include "../src/template.hpp"

TEST(EighthTest, PasteToTemplateTestTrue)
{
    Template pasteTestTrue;
    pasteTestTrue.template1();
    int y = 1;
    int x = 1;
    char c = 'A';
    short blocksizeX = 4;
    short blocksizeY = 1;
    bool rotated = false;
    // expect method to return true (if input was correct, return true to tell method Blocks::userSetBlock() that the made move was valid)
    EXPECT_EQ(pasteTestTrue.pasteToTemplate(y, x, c, blocksizeX, blocksizeY, rotated), true);
}

TEST(NinethTest, PasteToTemplateTestFalse)
{
    Template pasteTestFalse;
    pasteTestFalse.template1();
    int y = 1;
    int x = 9;
    char c = 'A';
    short blocksizeX = 4;
    short blocksizeY = 1;
    bool rotated = false;
    // expect method to return false (if input was incorrect, return false to tell method Blocks::userSetBlock() that the made move was invalid)
    EXPECT_EQ(pasteTestFalse.pasteToTemplate(y, x, c, blocksizeX, blocksizeY, rotated), false);
}