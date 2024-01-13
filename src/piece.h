#ifndef PIECE_H
#define PIECE_H

#include <stdlib.h>
#include <stdio.h>
#include "player.h"
#include "board.h"


class piece : public board {
  friend class player;
  public:
  
    piece();
    piece(char player);
    virtual void move();
    virtual char attack();
    virtual piece transform(char dest);
    virtual bool move_request();
    virtual bool checkFirst_move();
    virtual bool moveFirst();
    virtual bool checkPath(piece* brd);
    virtual void playFirst_move();
  private:
    char color = NULL;
    int loc;
    //unsigned char atk_request();

};

#endif