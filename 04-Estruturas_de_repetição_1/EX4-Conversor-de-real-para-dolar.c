#include <stdio.h>

int main(void) {
  int Cont, Conv;
  float R, D;

  Cont = 1;

  printf("Quantas serão as conversões? ");
  scanf("%d", &Conv);
    
  while (Cont <= Conv){
    printf("Informe o valor em reais a ser convertido para dolar: R$");
    scanf("%f", &R);
    D = R * 0.20;
    printf("O valor em dolares é de U$%f\n\n", D);
    Cont++;
  }
  
  return 0;
}