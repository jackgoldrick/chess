#ifndef PIECE_H
#define PIECE_H


#include <stdlib.h>
#include <stdio.h>
#include <stdexcept>
#include "player.h"
#include "board.h"

using namespace std;

class piece : public board {
  friend class player;
  public:
   
    piece() {
      this->color = EMPTY;
      
    }

    piece(char player);
    ~piece() =  default;
    

    virtual void set_color(char clr) { this->color = clr; }

    virtual void set_location(int loc);
    virtual void set_location(int row, int col);

    virtual int get_location();
    virtual unsigned char get_color();

    virtual void move();
    virtual void playFirst_move();
    virtual char attack();

    virtual bool move_request();
    virtual bool checkFirst_move();
    virtual bool moveFirst();

    virtual bool check_attack_path(int location, board* brd) {


      if (brd->is_empty(location)) return false;

      if (this->check_path(location, brd)) return true;

      return false;

    }
    virtual bool check_attack_path(piece* refPiece, int row, int col);

    virtual bool is_white();

    virtual bool check_path(int location, board* brd);
    virtual int check_path(board* brd, int location);



    virtual piece transform(char dest);
   

  private:
    // bool white = true;
    char color = NULL;
    int loc;
    //unsigned char atk_request();

};

#endif