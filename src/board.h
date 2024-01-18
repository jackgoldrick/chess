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
    bool check_loc(int Loc);
    piece*** brd;
};

#endif