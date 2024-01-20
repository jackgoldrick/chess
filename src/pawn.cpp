#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "pawn.h"

pawn::pawn(){
 






}

pawn::pawn(char player){


 

}


bool pawn::check_black_path(int location, board* brd) {
    int piece_loc = this->get_location();
    if (this->checkFirst_move()) {
       if (brd->is_empty(piece_loc + (8))) {

        return true;

       } 
    }
    return false;



}




/**
 *  checks pawns path 
 * 
 * 
 * 
 * 
 * 
*/
bool pawn::checkPath(board* tbrd){
    if (this->checkFirst_move()) {
    }
    else
    {
        this->move();
    }
}

bool pawn::checkFirst_move() { return this->first_move; }

void pawn::move() {
    if (this->is_white()) {


    }
  







}

