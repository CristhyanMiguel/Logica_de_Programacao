#include <stdio.h>

int x, y;
void Soma(int a,int b){
  printf("recebi o valor %d\n", a);
  printf("recebi o valor %d\n", b);
  printf("a soma entre os dois e: %d", a + b);
};
int main(void) {
  x = 5;
  y = 3;
  Soma(x,y);
  return 0;
}