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
    bool move_request() override;
    void move() override;
    char attack() override;
    piece transform(char dest) override;
    bool check_path(int location, board* brd) override;
    bool first_move = true;

private:
    // char color = NULL;
    // int loc;
};

#endif
