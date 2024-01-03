#include "chess.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "player.h"

chess::chess(){
    this->game_mode = 'r';
    this->white = new player();
    this->black = new player();
    this->gbrd = new board();


}
