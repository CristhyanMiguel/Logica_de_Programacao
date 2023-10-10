#include <stdio.h>

int main(void) {
  int i, n[4];
  for(i=0; i<=3; i++){
    printf("Digite o %do. valor: ", i+1);
    scanf("%d", &n[i]);
  }
  for(i=0; i<=3; i++){
    printf("%d..", n[i]);
  }
  return 0;
}