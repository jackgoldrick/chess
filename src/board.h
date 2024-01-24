#ifndef BOARD_H
#define BOARD_H

#define WHITE 'c'

#define BLACK 'b'

#define EMPTY 'e'

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "piece.h"
#include "chess.h"


class board : public chess { // The class
  

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


    void move_piece(piece* refPieece, int row, int col);
    void move_piece(piece* refPieece, int location);


    piece*** brd;
};

#endif