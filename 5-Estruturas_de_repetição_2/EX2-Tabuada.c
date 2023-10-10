#include <stdio.h>

int main(void) {
  int cont, n, r;
  printf("A tabuada de qual numero voce deseja exibir? ");
  scanf("%d", &n);
  r = n;
  cont = 1;
  do{
    printf("%d x %d = %d\n", n, cont, r);
    cont = cont + 1;
    r = n * cont;
  }while(cont <= 10);
  return 0;
}