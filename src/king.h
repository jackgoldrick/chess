#ifndef KING_H
#define KING_H

#include <stdlib.h>
#include <stdio.h>
#include "piece.h"

// template <class T>
class king : public piece
{

public:
    king();
    king(char player);
    king(char color, int row, int col);
    bool move_request() override;
    void move() override;
    char attack() override;
    bool check_path(int location, board* brd) override;
    bool first_move = true;

private:
    // char color = NULL;
    // int loc;
};

#endif
