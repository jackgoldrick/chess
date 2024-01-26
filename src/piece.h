#ifndef PIECE_H
#define PIECE_H


#include <stdlib.h>
#include <stdio.h>
#include "player.h"
#include "board.h"


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

    virtual bool check_attack_path(piece* refPiece, int location);
    virtual bool check_attack_path(piece* refPiece, int row, int col);

    virtual bool is_white();

    virtual bool check_path(int location, board* brd);
    virtual bool check_white_path(int loc);
    virtual bool check_black_path(int location, board* game);

    virtual piece transform(char dest);
   
    int translate(int row, int col) {
    
      return (row * 8 + col);


    }

    int get_row(int location) { return ((location - (location % 8)) / 8);  }

    int get_column(int location) { return location % 8;   }

  private:
    // bool white = true;
    char color = NULL;
    int loc;
    //unsigned char atk_request();

};

#endif