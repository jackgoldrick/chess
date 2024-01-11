#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "pawn.h"

pawn::pawn(){
 






}

pawn::pawn(char player){


 

}

bool pawn::checkPath(){
    if (this->checkFirst_move())
    {
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

