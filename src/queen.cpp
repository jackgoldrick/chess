#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "queen.h"


bool queen::check_path(int location, board* brd){
    int piece_loc = this->get_location();
    int row = get_row(piece_loc);
    int col_diff = abs(piece_loc - location);

   // int bound = get_row(piece_loc);
    int direction = 1;
    int loop_size = 8;
   
      
    /* what if i only need to check if they are in the same row and column for an attack or move*/



    if (location < piece_loc) { 
        direction = -1;
        loop_size = 0;

    }

    
    /** checks to see if the desired location in in the same column
     *  if so, then it will only iterate up and down the column
    
    
    
    */

    if (col_diff  > 8){ 
        
        for (int i = 1; i < abs(loop_size - row); i++ ) {

        if (!brd->is_empty(piece_loc + (direction * 8 * i))) return false;
        
        }


    } else {
        
        for (int i = 1; i < col_diff; i++ ) {

        if (!brd->is_empty(piece_loc + (direction * i))) return false;
        
        }



    }





}