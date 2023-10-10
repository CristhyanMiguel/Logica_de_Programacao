#include <stdio.h>

int main(void) {
  int cont, n, s, m, me;

  cont = 1;
  s = 0;
  
  while (cont <= 5){
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
  }
  printf("\nA soma da galera foi: %d\n", s);
  printf("E o maior numero digitado foi: %d\n", m);
  printf("E o menor numero digitado foi: %d", me);
  
  return 0;
}