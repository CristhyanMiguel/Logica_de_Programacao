#include <stdio.h>

int soma(int N1, int N2){
  int S;
  S = N1 + N2;
  return S;
};

int main(void) {
  int i, V1, V2, resultado;

  for(i=1; i<=3; i++){
    printf("Digite um valor inteiro: ");
    scanf("%d", &V1);
    
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &V2);
    
    resultado = soma(V1, V2);
    
    printf("o resultado da soma é: %d\n\n", resultado);
  }
  
  return 0;
}