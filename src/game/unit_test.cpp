#include "chess.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <gtest/gtest.h>
#include "board.h"
#include "pawn.h"

int main(int argc, char) {

    chess *game = new chess();

    game->playGame();

    




}


class PawnTest : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        board_ = new board();
        pawn_ = new pawn('w');
        board_->set_piece(pawn_, 0, 0);
    }

    virtual void TearDown()
    {
        delete pawn_;
        delete board_;
    }

    pawn *pawn_;
    board *board_;
};

TEST_F(PawnTest, WhitePawnCanAttackForward)
{
    EXPECT_TRUE(pawn_->check_attack_path(1, board_));
}

TEST_F(PawnTest, WhitePawnCannotAttackBackward)
{
    EXPECT_FALSE(pawn_->check_attack_path(-1, board_));
}

TEST_F(PawnTest, BlackPawnCanAttackForward)
{
    pawn_ = new pawn('b');
    board_->set_piece(pawn_, 7, 0);
    EXPECT_TRUE(pawn_->check_attack_path(1, board_));
}

TEST_F(PawnTest, BlackPawnCannotAttackBackward)
{
    pawn_ = new pawn('b');
    board_->set_piece(pawn_, 7, 0);
    EXPECT_FALSE(pawn_->check_attack_path(-1, board_));
}

TEST_F(PawnTest, WhitePawnCannotAttackOtherColor)
{
    EXPECT_FALSE(pawn_->check_attack_path(1, board_));
}

TEST_F(PawnTest, BlackPawnCannotAttackOtherColor)
{
    pawn_ = new pawn('b');
    board_->set_piece(pawn_, 7, 0);
    EXPECT_FALSE(pawn_->check_attack_path(1, board_));
}

TEST_F(PawnTest, WhitePawnCannotJump)
{
    EXPECT_FALSE(pawn_->check_attack_path(2, board_));
}

TEST_F(PawnTest, BlackPawnCannotJump)
{
    pawn_ = new pawn('b');
    board_->set_piece(pawn_, 7, 0);
    EXPECT_FALSE(pawn_->check_attack_path(2, board_));
}