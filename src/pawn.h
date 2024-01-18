#ifndef PAWN_H
#define PAWN_H

#include <stdlib.h>
#include <stdio.h>
#include "piece.h"

//template <class T>
class pawn : public piece
{

public:
  pawn();
  pawn(char player);
  bool move_request() override;
  void move() override;
  char attack() override;
  bool checkFirst_move() override;
  piece transform(char dest) override;
  bool checkPath(board* brd) override;
  bool first_move = true;
  int get_location() override;
  bool is_white() override;

private:
 // char color = NULL;
 // int loc;

};

#endif
 