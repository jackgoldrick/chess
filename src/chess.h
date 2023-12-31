#ifndef CHESS_H
#define CHESS_H

//** c libraries I fucking need
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>



using namespace std;

class chess {                    // The class

private:
char game_mode = NULL;



public:              // Access specifier
    int myNum;       // Attribute (int variable)
    string myString; // Attribute (string variable)
};
#endif