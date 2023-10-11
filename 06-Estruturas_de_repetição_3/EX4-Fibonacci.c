#include <stdio.h>

int main(void) {
  int i, f = 0, valor = 0, valor2 = 1;
  for(i = 1; i <= 15; i++){
    
    printf("%d\n", f);
    
    f = valor + valor2;
    valor = valor2; 
    valor2 = f;
    
    //printf("valor1 = %d\n", valor1);
    //printf("valor2 = %d\n", valor2);
  }
  return 0;
}