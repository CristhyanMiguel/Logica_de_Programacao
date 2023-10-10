#include <stdio.h>

int main(void) {
  int i, j, aux, v[4];
  for(i=0; i<=3; i++){
    printf("Digite um valor: ");
    scanf("%d", &v[i]);
  }
  
  for(i=0; i<=2; i++){
    for(j=i+1; j<=3; j++){
      if(v[i]>v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
      }
    }  
  }
  
  for(i=0; i<=3; i++){
    printf("{%d}", v[i]);
  }
  return 0;
}