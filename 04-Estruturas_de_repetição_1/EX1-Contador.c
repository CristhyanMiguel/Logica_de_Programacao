#include <stdio.h>

int main(void) {
 int contador;

  contador = 10;

  while(contador >=0){
    printf("Numero da contagem é: %d\n", contador);
    contador--;
  }

  printf("Terminei de contar");
  return 0;
}