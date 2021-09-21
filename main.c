#include <stdio.h>
#include <stdlib.h>
#include "problem.h"
#include "stack.h"
#include "bm.h"
#include "engine.h"

int main()
{
  ppush(0,0);
  pcurrent = phead;
  printf("The game is on!\n");
  solve();
  printf("Game over!\n");
  printf("Rat has cleared the maze along the following path:\n");
  printbm();
  return 0;
}
