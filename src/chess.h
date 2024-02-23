#ifndef CHESS_H
#define CHESS_H

//** c libraries I fucking need
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
//#include <string>
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

    string structions[3];
    int int_structions[3];
    bool atk_request(piece* refPiece);
    bool move_request(piece* refPieece);
    bool king_check();
    void do_turn(player *refPlayer);
    

  public : // Access specifier
    void query();
    void query(int cmd);
    chess();
    chess(char mode);
    void playGame();
};
#endif