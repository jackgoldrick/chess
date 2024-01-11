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
    piece& checkSpace(int Loc);
    piece* brd[8][8];
};

#endif