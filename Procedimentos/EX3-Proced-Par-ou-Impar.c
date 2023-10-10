#include <stdio.h>

int N;

void parouimpar(int a){
  if (a%2 == 0){
    printf("o numero %d e par", a);
  }
  else{
    printf("o numero %d e impar", a);
  }
};

int main(void) {
  printf("Digite um numero: ");
  scanf("%d", &N);
  parouimpar(N);
  return 0;
}