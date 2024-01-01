#ifndef PAWN_H
#define PAWN_H

#include <stdlib.h>
#include <stdio.h>
#include "piece.h"

//template <class T>
class pawn : public piece<pawn>
{

public:
  pawn();
  pawn(char player);
  char move();
  char attack();
  void transform(char dest);

private:
  char color = NULL;
  int loc;
};

#endif
 