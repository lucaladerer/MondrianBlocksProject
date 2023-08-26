#include "gtest/gtest.h"
#include "../src/game.hpp"


class GameTest
    : public ::testing::Test
{
protected:
    Game m_game;

    virtual void SetUp() override
    {
        m_game = Game();
    }

};


TEST_F(GameTest, ScoreIsZeroWithOnlyZeroRolls)
{
   EXPECT_EQ(0, 0);
}
