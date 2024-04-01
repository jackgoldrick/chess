#include <stdlib.h>
#include <stdio.h>
#include "piece.h"
#include "king.h"

king::king(char color, int row, int col){
    this->set_color(color);
    this->set_location(row, col);

}

bool king::check_path(int location, board* brd) {
    int piece_loc = this->get_location();
    int direction = location - piece_loc;
    int condit = abs(direction);

    try {

        if (condit < 7 || condit > 9) throw std::invalid_argument("Kings don't move like that");

        
    } catch (const std::exception& e) {

        

    }


    if (!brd->is_empty(piece_loc + direction)) return false;


    return true;


}