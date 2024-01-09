#ifndef QUUEN_H
#define QUEEN_H

#include <stdlib.h>
#include <stdio.h>
#include "piece.h"

// template <class T>
class queen : public piece
{

public:
    queen();
    queen(char player);
    bool move_request() override;
    void move() override;
    char attack() override;
    piece transform(char dest) override;
    bool first_move = true;

private:
    // char color = NULL;
    // int loc;
};

#endif
