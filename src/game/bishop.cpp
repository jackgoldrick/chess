#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "bishop.h"

//using namespace std;
bishop::bishop(char color, int row, int col) {
    this->set_color(color);
    this->set_location(row, col);
}


bool bishop::check_path(int location, board* brd){
    int piece_loc = this->get_location();
    int row = get_row(piece_loc);
    int col_diff = (location % 8) - (piece_loc % 8); // positive is  to right (9) and negative is to left (7)

   // int bound = get_row(piece_loc);
    int direction = 1;
    int loop_size = 8;
    int step = 8;
      
  
    /** this only handles "behind", left diagnol not implemented since it is ahead on a number line
     *  the difference in row or locations should tell us the amount of iterations needed
     *  then i can add 9 or 7 to move diagnolly 
     *  add 7 should move up and left and 9 should move up and right
     *  the subtraaction case should follow a similar basis 
     */
    if (location < piece_loc) { 
        direction = -1;
        loop_size = 0;

    }
    /** 
     * checks to see if we need to move diagnol left (7) or diagnol right (9)
    */
    if (col_diff > 0) {
        step = 9;

    } else if (col_diff < 0) {

        step = 7;

    } else {

        throw std::invalid_argument("Bishops don't move like that");

    }

    for (int i = 1; i < abs(loop_size - row); i++ ) {

        if (!brd->is_empty(piece_loc + (direction * step * i))) return false;
        
    }

    return true;

        

}



