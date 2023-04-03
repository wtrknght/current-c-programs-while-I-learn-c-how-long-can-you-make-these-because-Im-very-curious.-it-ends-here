#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int getRandom(int maximum) {
  int randomnum = rand() % maximum + 1;
  return randomnum;
}

int main() {
  srand(time(NULL));
  int randomNumber = getRandom(100);
  printf("%d", randomNumber);
  sleep(5);
  return 0;
}
