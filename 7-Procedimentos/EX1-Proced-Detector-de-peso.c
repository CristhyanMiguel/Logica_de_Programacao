#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

float Mai;

void topo(){
  printf("DETECTOR DE PESADO\n");
  printf("Maior peso ate agora: %f\n", Mai);
}

int main(void) {
  int i;
  float P;
  char N[50], Pesado[50];
  
  topo();

  for (i = 1; i <= 5; i++) {
    printf("Digite um nome: ");
    scanf("%s", N);

    printf("Digite o peso de %s: ", N);
    scanf("%f", &P);

    if (P > Mai) {
      Mai = P;
      strcpy(Pesado, N);
    }
    topo();
  }

  printf("\nDETECTOR DE PESADO\n");
  printf("Maior peso ate agora: %f\n", Mai);
  printf("A pessoa mais pesada foi %s, com %f quilos\n", Pesado, Mai);
  return 0;
}