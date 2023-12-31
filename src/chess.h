#ifndef CHESS_H
#define CHESS_H

//** c libraries I fucking need
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "player.h"



using namespace std;

class chess {       // The chess class

  private:
    char game_mode = NULL;
    bool white_turn = true;
    player white;
    player black;
    



public:              // Access specifier
    void do_turn();
    bool check4mate();;
    bool 
};
#endif