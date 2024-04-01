#ifndef BISHOP_H
#define BISHOP_H

#include <stdlib.h>
#include <stdio.h>
#include "piece.h"

// template <class T>
class bishop : public piece
{

public:
    bishop();
    bishop(char player);
    bishop(char color, int row, int col);
    bishop(char color, int loc);
    bool move_request() override;
    void move() override;
    char attack() override;
    bool check_path(int location, board* brd) override;

private:
    // char color = NULL;
    // int loc;
};

#endif
