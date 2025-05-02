#include "prob3.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void prob3_6() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 6 + 1;
  printf("数値：%d\n",n);
}
