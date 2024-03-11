#include "chess.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
//#include <string>
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
void chess::playGame() {
    
    while (!(this->white->check4mate() || this->black->check4mate())) {
        if (this->white_turn) {
            query();
            this->do_turn(white);
        }
        else {
            query();
            this->do_turn(black);
        }
    }
}

/** This does the turn and querries the player for the 
 *  desired move/attack location
 *  @param refPlayer is a pointer so the function knows 
 *  which player the turn is for when the location
 *  is checked
 *  @param instructions is a array of strings where each
 *  index is the 
*/
void chess::do_turn(player *refPlayer) {

    /* Query for piece to use */
    // qLoc => int //

   piece *playerPiece = &(gbrd->getPiece(int_structions[0]));

   while (gbrd->check_null(playerPiece)) {
        query();
        playerPiece = &(gbrd->getPiece(int_structions[0]));
   }


    if (int_structions[1]) {
        if (playerPiece->check_path(int_structions[2], gbrd)) gbrd->move_piece(playerPiece, int_structions[2]);

    } else {

        /*
            attack stuff here
        */
       if (playerPiece->check_attack_path(int_structions[2], gbrd)) gbrd->attack_piece(playerPiece, int_structions[2]);

    }

}


void chess::query() {





}


/* bool chess::move_request(piece* refPieece, int location) {
  

    if (refPieece->is_white()) {
       return refPieece->check_path(location, gbrd);
    }

    return false;
}

 char chess::move() {
    if (this->move_request()) {

        return 'g';
    }

    return 'f';
}

*/


