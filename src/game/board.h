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
    piece*** brd;

  public:              // Access specifier
    board();
    ~board(); // Destroy

    bool check_null(piece* refPiece);

    piece& getPiece(int Loc);
    piece* get_piece(int Loc);

    int get_row (int location);
    int get_col(int location);
    

    bool check_loc(int Loc);
    bool is_empty(int Loc);

    void transform_pawn(char outfit, int location);
    void move_piece(piece* refPieece, int row, int col);
    void move_piece(piece* refPieece, int location);

    void attack_piece(piece* refPieece, int row, int col);
    void attack_piece(piece* refPieece, int location);



    piece* query();
    
};

#endif