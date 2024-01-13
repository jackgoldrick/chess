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
  bool checkPath(piece *brd) override;
  bool first_move = true;

private:
 // char color = NULL;
 // int loc;

};

#endif
 