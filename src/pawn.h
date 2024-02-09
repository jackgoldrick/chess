#ifndef PAWN_H
#define PAWN_H

#include <stdlib.h>
#include <stdio.h>
#include "piece.h"

//template <class T>
class pawn : public piece {

public:
  pawn();
  pawn(char player);
  pawn(char color, int loc);
  pawn(char color, int row, int col);


  bool move_request() override;
  bool checkFirst_move() override;
  void move() override;
  char attack() override;
  

  piece transform(char dest) override;
  int get_location() override;

  bool is_white() override;
  bool check_attack_path(int location, board* brd) override;

  bool first_move = true;

  bool check_path(int location, board* brd) override; 
  bool check_white_path(int loc) override;
  bool check_black_path(int location, board* game)  override;

  unsigned char get_color() override;

private:
  char color = NULL;
  int loc;

};

#endif
 