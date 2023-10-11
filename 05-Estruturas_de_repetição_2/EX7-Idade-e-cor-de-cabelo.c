#include <stdio.h>
#include <stdlib.h>

/*
Homes com mais de 18 com cabelo castanho:
Mulheres entre 25 e 30 com cabelo loiro:
*/

int main(void) {
  int cont, sexo, idade, cabelo, h, m;
  char verifica, s;
  h = 0;
  m = 0;
  do{
    printf("Qual o sexo [m/f]? \n");
    scanf("%s", &s);
    printf("Qual a idade? \n");
    scanf("%d", &idade);
    printf("Qual a cor do cabelo? \n");
    printf("[1]Preto\n");
    printf("[2]Castanho\n");
    printf("[3]Loiro\n");
    printf("[4]Ruivo\n");
    scanf("%d", &cabelo);
    if((s = 'm') && (idade >= 18) && (cabelo = 2)){
      h = h + 1;
    }
    if((s = 'f') && (idade >= 25) && (idade <= 30) && (cabelo = 3)){
      m = m + 1;
    }
    printf("Deseja continuar [s/n]? \n");
    scanf("%s", &verifica);
    system("clear");
  } while(verifica != 'n');
  
  printf("Homes com mais de 18 com cabelo castanho: %d\n", h);
  printf("Mulheres entre 25 e 30 com cabelo loiro: %d\n", m);
  
  return 0;
}