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
  char move() override;
  char attack() override;
  piece transform(char dest) override;

private:
 // char color = NULL;
 // int loc;
 bool first_move = true;
};

#endif
 