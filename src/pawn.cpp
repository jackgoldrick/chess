#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "pawn.h"

pawn::pawn(){
 






}

pawn::pawn(char player){


 

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
        if (tbrd->validate_space(&this))

        this->playFirst_move();
    }
    else
    {
        this->move();
    }
}

bool pawn::checkFirst_move() { return this->first_move; }

void pawn::move() {
    if (this->is_white())
  







}

