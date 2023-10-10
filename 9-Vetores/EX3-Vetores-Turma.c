#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char nome[4][15];
  int i;
  float n1[4], n2[4], m[4];

  for(i=0; i<=3; i++){
    printf("Aluno: %d\n", i+1);
    printf("nome: ");
    scanf("%s", nome[i]);
    printf("Primeira nota: ");
    scanf("%f", &n1[i]);
    printf("Segunda nota: ");
    scanf("%f", &n2[i]);

    m[i] = (n1[i] + n2[i])/2;
  }
  system("clear");
  
  printf("Listagem de Alunos\n");
  printf("----------------------\n");
  for(i=0; i<=3; i++){
    printf("%s: %2.f\n", nome[i], m[i]);
  }
  
  return 0;
}