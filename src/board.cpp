#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "board.h"
#include "piece.h"
#include "pawn.h"



board::board(){
 // pawns for white 
    for (int j = 0; j < 8; j++){
        brd[1][j] = new pawn('w');
    }


 //pawns for black
    for (int j = 0; j < 8; j++) {
        brd[6][j] = new pawn('b');
    }

 // rooks
   // brd[0][0] = new rook('w');



}