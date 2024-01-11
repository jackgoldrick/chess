#include "chess.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "player.h"

chess::chess(){
    this->game_mode = 'r';
    this->brd = new board();
    this->white = new player();
    this->black = new player();
    
}

void chess::playGame()
{
    while (!(this->white->check4mate() || this->black->check4mate()))
    {
        if (this->white_turn)
        {
            this->do_turn(white);
        }

        else
        {
            this->do_turn(black);
        }
    }
}

void chess::do_turn(player *refPlayer){
    
    int qLoc = 0;
    /* Query for piece to use */
        // qLoc => int //
   bool temp = this->move_request(&this->brd->checkSpace(qLoc));

}

bool chess::move_request(piece* refPieece) {
    if (refPieece == nullptr) {
        return false;
    }  
    return refPieece->checkPath();
}

/* char chess::move() {
    if (this->move_request()) {

        return 'g';
    }

    return 'f';
}

*/


