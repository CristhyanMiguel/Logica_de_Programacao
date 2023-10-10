#include <stdio.h>

int x, y;

void soma(int* a, int* b){
  *a = *a + 1;
  *b = *b + 2;
  printf("valor de a = %d\n", *a);
  printf("valor de b = %d\n", *b);
  printf("Soma de a + b = %d\n\n", *a + *b);
};

int main(void) {
  x = 4, y = 8;
  soma(&x, &y);
  printf("valor de x = %d\n", x);
  printf("valor de y = %d\n", y);
  return 0;
}