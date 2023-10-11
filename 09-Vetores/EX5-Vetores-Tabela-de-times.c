#include <stdio.h>

int main(void) {
  char time[3][20];
  int i, j;

  for(i=0; i<=2; i++){
    printf("Nome do %do. time: ", i+1);
    scanf("%s", &time[i]);
  }
  for(i=0; i<=2; i++){ 
    for(j=0; j<=2; j++){
      if(time[i] != time[j]){
        printf("%s x %s\n", time[i], time[j]);
      }
    }
  }
  return 0;
}
