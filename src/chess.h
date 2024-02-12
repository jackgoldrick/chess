#ifndef CHESS_H
#define CHESS_H

//** c libraries I fucking need
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "player.h"
#include "board.h"



using namespace std;

extern char* cur_cmd_strm;
extern char* prev_cmd_strm;


class chess {       // The chess class

  private:
    char game_mode = NULL;
    bool white_turn = true;
    player* white;
    player* black;
    board* gbrd;
    bool move_request(piece* refPieece);
    

  public : // Access specifier
    void do_turn(player *refPlayer);
    piece* query();
    bool king_check();
    chess();
    chess(char mode);
    void playGame();
};
#endif