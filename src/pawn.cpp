#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "pawn.h"

pawn::pawn(){
 






}

pawn::pawn(char player){


 

}

bool pawn::checkPath(piece *tbrd){
    if (this->checkFirst_move()) {
        if (&(tbrd->checkSpace()) == nullptr)
        this->playFirst_move();
    }
    else
    {
        this->move();
    }
}

bool pawn::checkFirst_move() { return this->first_move; }

void pawn::move() {
  

}

