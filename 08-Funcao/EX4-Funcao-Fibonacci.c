#include <stdio.h>

int C, T1, T2, T3;
int ProximoFibonacci(int* A, int* B){
  int C;
  C = *A + *B;
  *A = *B;
  *B = C;
  return C;
};
int main(void) {
  T1 = 0;
  printf("%d.. ", T1);
  T2 = 1;
  printf("%d.. ", T2);
  for (C = 3; C <= 10; C++){
    T3 = ProximoFibonacci(&T1, &T2);
    printf("%d.. ", T3);
  }
  return 0;
}