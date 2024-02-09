#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "pawn.h"

pawn::pawn(){
    






}

pawn::pawn(char color, int row, int col) {
    this->set_color(color);
    this->set_location(row, col);
}




pawn::pawn(char color){
    



}

pawn::pawn(char player){


 

}


piece pawn::transform(char dest) {
    




}

bool pawn::check_attack_path(int location, board* brd) {
    int piece_loc = this->get_location();
    int color = -1;

    int direction = abs(location - piece_loc);

    try {
        if (direction == 7 || direction == 9) {

            if (this->get_color() == WHITE)  color = 1;    



        } else {

            throw std::invalid_argument("Pawns don't attack like that");

        }

    } catch (const std::exception& e) {





    }



    if (!brd->is_empty(piece_loc + (color * direction))) return true;


    return false;



}


bool pawn::check_path(int location, board* brd) {
    int piece_loc = this->get_location();

    int color = -1;

    if (this->get_color() == WHITE)  int color = 1;    

    // need to check exceptions here


    if (this->checkFirst_move()) {

        for (int i = 1; i < 2; i++ ) {

            if (!brd->is_empty(piece_loc + (color * 8 * i))) return false;
       } 

       return true;

    }

    if (brd->is_empty(piece_loc + (color * 8))) return true;

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
/* bool pawn::checkPath(board* tbrd){
    if (this->checkFirst_move()) {
    }
    else
    {
        this->move();
    }
}
*/

/* bool pawn::check_black_path(int location, board* brd) {
    int piece_loc = this->get_location();

    if (this->checkFirst_move()) {

        for (int i = 1; i < 3; i++ ) {

            if (!brd->is_empty(piece_loc - (8*i))) return false;
       } 

       return true;

    }

    if (brd->is_empty(piece_loc - (8))) return true;

    return false;



}
*/

/*void pawn::move() {
    if (this->is_white()) {


    }
  
}
*/

