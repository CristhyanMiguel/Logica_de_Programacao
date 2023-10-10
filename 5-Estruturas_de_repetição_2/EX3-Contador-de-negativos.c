#include <stdio.h>

int main(void) {
  int n, totn, cont;
  cont = 0;
  totn = 0;
  do{
    printf("Digite um numero: ");
    scanf("%d", &n);
    if (n < 0){
      totn = totn + 1;
    }
    cont = cont + 1;
  } while (cont < 5);
  printf("O total de numeros negativos é: %d", totn);
  return 0;
}