#include <stdio.h>
int g1, g2;
void calculogols(int* a, int* b){
  int diferenca;
  if(*a >= *b){
    diferenca = *a - *b;
  }
  else{
    diferenca = *b - *a;
  }
   printf("A diferença de gols foi de: %d\n", diferenca);
  if(diferenca >= 4){
    printf("Partida: Goleada");
  }
  else{
    if((diferenca < 4) && (diferenca >= 1)){
      printf("Partida: Normal");
    }
    else
      printf("Partida: Empate");
  }
};
int main(void) {
  printf("Informe os gols do primeiro time: ");
  scanf("%d", &g1);

  printf("Informe os gols do segundo time: ");
  scanf("%d", &g2);

  calculogols(&g1, &g2);
  return 0;
}