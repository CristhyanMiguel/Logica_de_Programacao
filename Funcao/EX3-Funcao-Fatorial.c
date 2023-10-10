#include <stdio.h>

int fatorial(int v){
  int r = 1;
  for(int i = 1; i<= v; i++){
    r  = r * i;
  }
  return r;
};

int main(void) {
  int n;
  printf("Digite um numero:");
  scanf("%d", &n);
  n = fatorial(n);
  printf("o fatorial e: %d", n);
  return 0;
}