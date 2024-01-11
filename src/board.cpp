#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "board.h"
#include "piece.h"
#include "pawn.h"
#include "bishop.h"
#include "rook.h"
#include "queen.h"
#include "king.h"
#include "knight.h"


piece& board::checkSpace(int Loc){

  int col = Loc % 8;

  int row = (Loc - col) / 8;

  return *brd[row][col]; 
 
}

board::board(){
  // pawns for white 
  for (int j = 0; j < 8; j++){
    brd[1][j] = new pawn('w');
  }


  // pawns for black
  for (int j = 0; j < 8; j++) {
    brd[6][j] = new pawn('b');
  }

  // rooks
  brd[0][0] = new rook('w');
  brd[0][7] = new rook('w');
  brd[7][0] = new rook('b');
  brd[7][7] = new rook('b');

  // knights
  brd[0][1] = new knight('w');
  brd[0][6] = new knight('w');
  brd[7][1] = new knight('b');
  brd[7][6] = new knight('b');

  brd[0][2] = new bishop('w');
  brd[0][5] = new bishop('w');
  brd[7][2] = new bishop('b');
  brd[7][5] = new bishop('b');

  // queen
  brd[0][3] = new queen('w');
  brd[7][3] = new queen('b');

  // king
  brd[0][4] = new king('w');
  brd[7][4] = new king('b');


}