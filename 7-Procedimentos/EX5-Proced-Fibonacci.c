#include <stdio.h>
int C, T1, T2, T3;
void ProximoFibonacci(int* A, int* B){
  int C;
  C = *A + *B;
  printf("%d.. ", C);
  *A = *B;
  *B = C;
};
int main(void) {
  T1 = 0;
  printf("%d.. ", T1);
  T2 = 1;
  printf("%d.. ", T2);
  for (C = 3; C <= 10; C++){
    ProximoFibonacci(&T1, &T2);
  }
  return 0;
}