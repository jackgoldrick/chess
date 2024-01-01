#ifndef PLAYER_H
#define PLAYER_H

//** c libraries I fucking need
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

// idk why I need this fucking thing
using namespace std;

class player { // The player class

  private:
    
    int num_pieces = 16;
    int num_pawns = 8;
    int num_rooks = 2;
    int num_knights = 2;
    int num_queens = 1;
    int num_king = 1;
    int num_bishops = 2;

    bool king = true;
    bool king_check = false;
    bool checkmate = false;
    string t; 

  public:              // Access specifier
    player();

};

#endif