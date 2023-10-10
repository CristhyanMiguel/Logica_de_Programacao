#include <stdio.h>

int main(void) {
  int i, j;
  printf("digite um valor: ");
  scanf("%d", &j);
  if (j%2 == 1){
    j = j - 1;
  }
  for(i = j; i >= 0; i = i - 2){
    printf("%d.. ", i);
  }
  return 0;
}