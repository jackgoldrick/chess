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

template <typename Base, typename T>
bool instanceof (const T *ptr) {
  return dynamic_cast<const Base *>(ptr) != nullptr;
}

piece& board::getPiece(int Loc){

  int col = Loc % 8;

  int row = (Loc - col) / 8;

  return *brd[row][col]; 
 
}


piece* board::get_piece(int Loc){

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
  
  // set empty location to 
  this->brd[get_row(location)][get_col(location)] = refPieece;

  refPieece->set_location(location);

  this->brd[get_row(destruction_location)][get_col(destruction_location)]->~piece();


}
void board::move_piece(piece* refPieece, int loc) {
      







}
void board::transform_pawn(char outfit, int location) {
  // need to create an instance of the piece function
  int row = get_row(location);
  int col = get_col(location);
  // check instance here, if good delete pawn from board
  (this->brd[row][col])->~piece();

  switch (outfit) {
    case 'b':
      
      this->brd[row][col] = new bishop(location);

      break;

    case 'r':
      
      this->brd[row][col] = new rook(location);

      break;

    case 'q':
      
      this->brd[row][col] = new queen(location);

      break;

    case 'k':
      
      this->brd[row][col] = new knight(location);

      break;

    default:
      
      this->brd[row][col] = new queen(location);

      break;
  }
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