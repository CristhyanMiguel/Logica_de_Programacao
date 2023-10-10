#include <stdio.h>

int main(void) {
  int i, valor, soma010 = 0, somaimpar = 0, qvalor = 0;
  for(i = 1; i<=6; i++){
    printf("Digite o valor %d: ", i);
    scanf("%d", &valor);
    if((valor >= 0) && (valor <= 10)){
      qvalor = qvalor + 1;

      if(valor%2 == 1){
        soma010 = soma010 + valor;
      }
    }
    if(valor%2 == 1){
        somaimpar = somaimpar + valor;
    }
  }
  printf("A quantidade de numeros entre 0 e 10 são de: %d\n", qvalor);
  printf("A soma entre esses numeros, que e impar, e de: %d\n", soma010);
  printf("A soma de todos os numeros impares: %d", somaimpar);
  

  return 0;
}