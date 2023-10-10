#include <stdio.h>

int main(void) {
  int c = 0, i, v[7];
  for(i=0; i<=6; i++){
    printf("digite o %do. valor: ", i+1);
    scanf("%d", &v[i]);
  }
  printf("\nExistem %d valores pares\n\n", c);
  
  for(i=0; i<=6; i++){
    if (v[i]%2 == 0){
      c = c + 1;
      printf("Valor par na %d o. posicao\n", i+1);
    }
  }
  return 0;
}