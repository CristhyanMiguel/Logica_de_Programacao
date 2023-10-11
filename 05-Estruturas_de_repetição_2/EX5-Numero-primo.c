#include <stdio.h>

int main(void) {
  int C, N, VeriDiv, ContDiv;
  C = 1;
  ContDiv = 0;
  printf("Digite um numero: ");
  scanf("%d", &N);
  do{
    VeriDiv = N % C;
    if (VeriDiv == 0){
      ContDiv = ContDiv + 1;
    }
    C = C + 1;
  } while(C < N); 
  if (ContDiv > 2){
    printf("O valor %d nao e primo", N);
  }
  else{
    printf("O valor %d e primo", N);
  }
  return 0;
}