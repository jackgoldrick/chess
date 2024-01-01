#ifndef PIECE_H
#define PIECE_H

#include <stdlib.h>
#include <stdio.h>
#include "player.h"

template <class C>
class piece : public player {

  public:
        C piece();
        C piece(char player);
        char move();
        char attack();
        C transform(char dest);

    private:
        char color = NULL;
        int loc;
        unsigned char move_request();
        unsigned char atk_request();

};

#endif