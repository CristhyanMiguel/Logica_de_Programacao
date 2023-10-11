#include <stdio.h>

int main(void) {
  int inicio, fim, salto;

  printf("Por onde voce deseja comacar a contar? ");
  scanf("%d", &inicio);

  printf("Até onde voce deseja contar? ");
  scanf("%d", &fim);

  printf("Qual será o salto de contagem? ");
  scanf("%d", &salto);

  if(inicio < fim){
    while(inicio <= fim){
    printf("Número da contagem: %d\n", inicio);
    inicio = inicio + salto;
    } 
  }
  else
    while(fim <= inicio){
    printf("Número da contagem: %d\n", inicio);
    inicio = inicio - salto;
  }
  
  return 0;
}