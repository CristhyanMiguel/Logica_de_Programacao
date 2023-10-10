#include <stdio.h>

int main(void) {
  int valores[3][3], l, c ,totpar;
  for(l=0;l<=2;l++){
    for(c=0;c<=2;c++){
      printf("Digite o valor da posicao [%d,%d]: ", l, c);
      scanf("%d", &valores[l][c]);
    }
  }
  totpar = 0;
  for(l=0;l<=2;l++){
    for(c=0;c<=2;c++){
      if(valores[l][c]%2==0){
        printf("{%2.d}", valores[l][c]);
        totpar = totpar + 1;
      }
      else{
      printf("%4.d", valores[l][c]);
      }
    }
    printf("\n");
  }
  printf("O numero de valores pares e de: %d", totpar);
  
  return 0;
}