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
    virtual void playFirst_move();
    virtual char attack();

    virtual bool move_request();
    virtual bool checkFirst_move();
    virtual bool moveFirst();

    virtual bool checkPath(piece*** brd);
    virtual bool checkPath(board* brd);

    virtual bool is_white();

    virtual bool check_white_path(int loc);
    virtual bool check_black_path(int location, board* game) ;




    virtual piece transform(char dest);
    virtual int get_location();
    
  private:
    bool white = true;
    char color = NULL;
    int loc;
    //unsigned char atk_request();

};

#endif