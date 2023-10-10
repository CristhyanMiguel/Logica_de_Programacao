#include <stdio.h>

int main(void) {
  int m[4][4], l, c, sDP = 0, mult = 1, maiorvalor = 0;
  
  for(l=0;l<=3;l++){
    for(c=0;c<=3;c++){
      printf("Digite o valor da posicao [%d, %d]: ", l+1, c+1);
      scanf("%d", &m[l][c]);
      if(l == c){
        sDP = sDP + m[l][c];
      }
    }
  }

  for(c=0;c<=3;c++){
    mult = m[1][c] * mult;
  }

  for(l=0;l<=3;l++){
    if (m[l][2] > maiorvalor){
      maiorvalor = m[l][2];
    }
  }  

  for(l=0;l<=3;l++){
    for(c=0;c<=3;c++){
      printf("%d   ", m[l][c]);
    }
    printf("\n");
  }
  
  printf("\nA soma da diagonal principal e %d: \n", sDP);
  printf("O produto da segunda linha e %d: \n", mult);
  printf("O maior valor da 3o. coluna e: %d", maiorvalor);
  return 0;
}