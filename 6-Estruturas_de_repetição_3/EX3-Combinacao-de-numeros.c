#include <stdio.h>

int main(void) {
  int c1, c2;
  for(c1 = 1; c1 <= 3; c1++){
    for(c2 = 1; c2 <= 3; c2++){
      printf("%d %d\n", c1, c2);
    }
  }
  return 0;
}