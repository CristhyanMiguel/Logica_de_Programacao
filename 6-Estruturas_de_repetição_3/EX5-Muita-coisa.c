#include <stdio.h>

int main(void) {
  int cont, valores, valornull = 0, valor5 = 0, somapar = 0, somavalor = 0;
  float mediavalor;
  

  for(cont = 1; cont<= 5; cont++){
    printf("Informe o %do numero: ", cont);
    scanf("%d", &valores);
    
    somavalor = somavalor + valores;

    if(valores % 5 == 0){
      valor5 = valor5 + 1;
    }
    
    if(valores % 2 == 0){
      somapar = somapar + valores;
    }

    if(valores == 0){
      valornull = valornull + 1;
    }
  }

  mediavalor = somavalor/5;

  printf("A soma de todos os valores e de: %d\n", somavalor);
  printf("A media entre os valores e de: %f\n", mediavalor);
  printf("Valores divisiveis por 5: %d\n", valor5);
  printf("Valores nulos: %d\n", valornull);
  printf("A soma dos valores pares e de: %d\n", somapar);
  
  return 0;
}