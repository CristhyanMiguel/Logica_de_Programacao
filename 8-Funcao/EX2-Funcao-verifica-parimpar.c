#include <stdio.h>

char* verificaparimpar(int n){
  if (n%2 == 0){
    return "par";
  }
  else{
    return "impar";
  }
};

int main(){
  int v;
  printf("Digite um numero: ");
  scanf("%d", &v);

  char* r = verificaparimpar(v);

  printf("o numero e %s", r);
  return 0;
}
















/* Função para verificar se um número é par ou ímpar
const char* verificarParImpar(int numero) {
    if (numero % 2 == 0) {
        return "par";
    } else {
        return "ímpar";
    }
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    const char* resultado = verificarParImpar(numero);

    printf("O número %d é %s.\n", numero, resultado);

    return 0;
}
*/