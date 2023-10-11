#include <stdio.h>

int main(void) {
  int so, n, m, me, resp, s = 0, cont = 1;
  
  do {
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    if (n >= m){
      m = n;
    }
    if (n <= me){
      me = n;
    }
    s = s + n;
    cont++;
    printf("Deseja continuar? 0 para SIM, 1 para NAO\n");
    scanf("%d", &resp);
  } while (resp != 1);
    
  printf("\nA soma da galera foi: %d\n", s);
  printf("E o maior numero digitado foi: %d\n", m);
  printf("E o menor numero digitado foi: %d", me);
  return 0;
}