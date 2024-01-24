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


piece* board::check_Space(int Loc){

  int col = Loc % 8;

  int row = (Loc - col) / 8;
  

  return brd[row][col]; 
 
}

bool board::is_empty(int Loc){

  int col = Loc % 8;

  int row = (Loc - col) / 8;

  if(this->brd[row][col])  {
    
    return false;

  }

  return true; 
 
}

int board::get_row (int location) {

 return ((location - (location % 8)) / 8);

}

int board::get_col(int location) {

  return location % 8;

}


void board::move_piece(piece* refPieece, int location){
  // find the piece's old location
  int destruction_location = refPieece->get_location();
  
  
  this->brd[get_row(location)][get_col(location)] = refPieece;

  refPieece->set_location(location);

  this->brd[get_row(destruction_location)][get_col(destruction_location)]->~piece();


}

void board::move_piece(piece* refPieece, int row, int col){
  







}


bool board::validate_space(piece& ref_piece)  {
    










}

bool board::check_null(piece* refPiece) {
  if (refPiece) {
    return true;

  }

  return false;

}

board::board(){

  brd  = (piece***) malloc(32 * (sizeof(nullptr) + sizeof(pawn))  + 2 * (sizeof(king) + sizeof(queen) + 2 * (sizeof(rook)  + sizeof(knight) + sizeof(bishop))));

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