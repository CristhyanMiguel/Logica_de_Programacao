#include <stdio.h>

int main(void) {
  int cont, esco;

  cont = 1;
  printf("[1] de 1 a 10\n");
  printf("[2] de 10 a 1\n");
  printf("[3] para sair\n");
  scanf("%d", &esco);

  if(esco == 1){
    cont = 1;
    do{
    printf("%d.. ", cont);
    cont = cont + 1;
    } while(cont <= 10);
  }
  else{
    if (esco == 2){
      cont = 10;
      do{
        printf("%d.. ", cont);
        cont = cont - 1;
      } while(cont >= 1);
    }
    else{
      if (esco == 3){
        printf("Fim do programa");
      }
      else{
        printf("Numero invalido");
      }
    }
  }
  return 0;
}