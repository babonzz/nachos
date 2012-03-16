#include "stdio.h"

int main(char* args) {
  char* a = "a string";
  char b[9];

  memcpy(b, a, 9);
  printf("b is now: %s\n", b);
  return 0;
}
