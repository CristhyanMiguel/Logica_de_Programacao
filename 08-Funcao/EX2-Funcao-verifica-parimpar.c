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
