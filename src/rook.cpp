#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "rook.h"

rook::rook() {

}

rook::rook(char player) {


}

rook::rook(char color, int row, int col) {
    this->set_color(color);
    this->set_location(row, col);
}

// I need to prevent the return on itself
// if rook are in the 5th row postion,  and look ing to send it to the back of the board 


/** how to check lateral traverse of peices, this will lie in th column space so I can iterate on it 
 *  the foward or back works nicely because it is a multiplication of 8 on the linear integer term
 *  so the left movement will be minus  1 * i, and right will be plus 1 * i.  
 *  Loop i checks foward or back by iterating on multiple of eight
 *  
 * 
 * 
 */

bool rook::check_path(int location, board* brd) {

    int piece_loc = this->get_location();
    int row = get_row(piece_loc);
    int col_diff = abs(piece_loc - location);

   // int bound = get_row(piece_loc);
    int direction = 1;
    int row_diff = get_row(location);
   
      
    /* what if i only need to check if they are in the same row and column for an attack or move*/



    if (location < piece_loc) { 
        direction = -1;
        row_diff = 0;

    }

    
    /** checks to see if the desired location in in the same column
     *  if so, then it will only iterate up and down the column
      
    */

    if (col_diff  > 8){ 
        
        for (int i = 1; i < abs(row_diff - row); i++ ) {

        if (!brd->is_empty(piece_loc + (direction * 8 * i))) return false;
        
        }


    } else {
        
        for (int i = 1; i < col_diff; i++ ) {

        if (!brd->is_empty(piece_loc + (direction * i))) return false;
        
        }



    }


    if (!brd->is_empty(location)) return false;

    return true;

}

/* bool rook::check_attack_path(int location, board* brd) {


    if (brd->is_empty(location)) return false;

    if (this->check_path(location, brd)) return true;

    return false;

} */
