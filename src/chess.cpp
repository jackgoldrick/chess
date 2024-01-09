#include "chess.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "player.h"

chess::chess(){
    this->game_mode = 'r';
    this->gbrd = new board();
    this->white = new player();
    this->black = new player();
    
}

bool chess::move_request(piece& refPieece) {
    if (refPieece.checkPath()) {
        if (refPieece.checkFirst_move()) {
            refPieece.playFirst_move();
         
        }
        else { 
            refPieece.move(); 
           
        }
        return true;
    }

    return false;

}

char chess::move() {
    if (this->move_request()) {

        return 'g';
    }

    return 'f';
}
