#ifndef BOARD_H
#define BOARD_H

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "piece.h"


class board { // The class
  

  private :
    char game_mode = NULL;

  public:              // Access specifier
    board();
    ~board(); // Destroy
    bool validate_space(piece & ref_piece);
    bool check_null(piece* refPiece);
    piece& checkSpace(int Loc);
    piece* check_Space(int Loc);
    int get_row (int location);
    int get_col(int location);
    bool check_loc(int Loc);
    bool is_empty(int Loc);
    piece*** brd;
};

#endif