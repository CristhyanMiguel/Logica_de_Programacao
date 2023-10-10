#include <stdio.h>

int main(void) {
  int m[3][2];
  int l, c;
  
  for(l=0;l<=2;l++){
    for(c=0;c<=1;c++){
      printf("Valor da posicao: [%d,%d]", l, c);
      scanf("%d", &m[l][c]);
    }
  }

  for(l=0;l<=2;l++){
    for(c=0;c<=1;c++){
      printf(" %d ", m[l][c]);
    }
    printf("\n");
  }
  return 0;
}