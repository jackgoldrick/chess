#include "chess.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "player.h"

/** Default Constructor
 * used to initialize the game object 
 * to the default regular 2d game
*/
chess::chess(){
    this->game_mode = 'r';
    this->gbrd = new board();
    this->white = new player();
    this->black = new player();
    
}

/** this function plays the game of chess
 *  handles the call to do the turn based on 
 *  the bool of the turn
*/
void chess::playGame()
{
    while (!(this->white->check4mate() || this->black->check4mate())) {
        if (this->white_turn) {
            
            this->do_turn(white);
        }
        else {
            this->do_turn(black);
        }
    }
}

/** This does the turn and querries the player for the 
 *  desired move/attack location
 *  @param refPlayer is a pointer so the function knows 
 *  which player the turn is for when the location
 *  is checked
*/
void chess::do_turn(player *refPlayer) {
    
    int qLoc = 0;
    /* Query for piece to use */
    // qLoc => int //

   piece & playerPiece = this->gbrd->checkSpace(qLoc);

   while (this->gbrd->check_null(&playerPiece)){
        /*
        
            Query for piece to use
        
        */

   }

   if (this->move_request(&playerPiece)) this->gbrd->move_piece(&playerPiece, qLoc);

}

/* This function 

    this->gbrd->brd

*/
bool chess::move_request(piece* refPieece) {
    int location = 0;
    /**
     *  Query for location to move to
     *
    */
    if (refPieece->is_white()) {
       // return refPieece->check_white_path(location, gbrd);
    }

    return refPieece->check_black_path(location, gbrd);
    
}

/* char chess::move() {
    if (this->move_request()) {

        return 'g';
    }

    return 'f';
}

*/


