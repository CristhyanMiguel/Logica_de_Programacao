#include <stdio.h>

float anoa, anob;

void verifica_ano(){
  if((anoa - anob)>=18)
    printf("A pessoa está apta a tirar a CNH");
  else
    printf("A pessoa nao esta apta a tirar a CNH");
};

int main(void) {
  printf("---------------------------\n DEPARTAMENTO DE TRANSITO\n---------------------------\n");
  printf("Ano atual (yyyy): ");
  scanf("%f", &anoa);

  printf("Ano de nascimento (yyyy): ");
  scanf("%f", &anob);

  verifica_ano();
  
  return 0;
}