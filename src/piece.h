#ifndef PIECE_H
#define PIECE_H

#include <stdlib.h>
#include <stdio.h>
#include "player.h"


class piece : public player {

  public:
  
    piece();
    piece(char player);
    virtual  char move();
    virtual char attack();
    virtual piece transform(char dest);
    virtual bool move_request();
    virtual bool checkFirst_move();
    virtual bool moveFirst();
  private:
    char color = NULL;
    int loc;
    unsigned char atk_request();

};

#endif