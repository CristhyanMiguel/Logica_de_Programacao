#include <stdio.h>

int main(void) {
  int x, n, r, cont;
  
  printf("Deseja calcular o fatorial de qual numero? ");
  scanf("%d", &n);
  
  r = n;
  x = n;
  cont = 1;
  
  if((n == 1) || (n == 0)){
    printf("O fatorial de %d é 1", n);
  }
  else{
    do{
    x = x - 1;
    printf("x = %d\n", x);
    n = n * x;
    printf("n = %d\n", n);
    cont = cont + 1;
  } while (cont < r);
  printf("O fatorial de %d é %d", r, n);
  }

  return 0;
}

/*
  int c, f, n;
  printf("Digite um numero:");
  scanf("%d", &n);
  c = n;
  f = 1;
  do{
    f = f*c;
    c = c-1;
  } while(c > 1);
  printf("O fatorial de %d e igual a %d", n, f);
*/
