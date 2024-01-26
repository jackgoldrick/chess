#ifndef ROOK_H
#define ROOK_H

#include <stdlib.h>
#include <stdio.h>
#include "piece.h"

// template <class T>
class rook : public piece
{

public:
    rook();
    rook(char player);
    rook(char color, int row, int col);
    
    bool move_request() override;

    bool check_path(int location, board* brd) override;

    void move() override;
    char attack() override;
    piece transform(char dest) override;
    bool first_move = true;



private:
    // char color = NULL;
    // int loc;
};

#endif
