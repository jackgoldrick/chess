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
    char game_type = NULL;
    int num_pieces;
    int num_pawns;
    



public:              // Access specifier
    int myNum;       // Attribute (int variable)
    string myString; // Attribute (string variable)
};

#endif