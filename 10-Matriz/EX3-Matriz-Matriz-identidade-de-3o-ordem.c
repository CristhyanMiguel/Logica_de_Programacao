#include <stdio.h>

int main(void) {
  int mID[4][4], i, j;
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      if( i == j){
        mID[i][j] = 1;
      }
      else if(i != j){
        mID[i][j] = 0;
      }
    }
  }
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      printf("%d ", mID[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}