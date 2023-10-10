#include <stdio.h>
float n1, n2;
void media_aluno(float* a, float* b){
  float media;
  media = (*a + *b)/2;
  printf("Media: %2.f\n", media);
  if(media >= 7){
    printf("Aluno aprovado");
  }
  else{
    printf("Aluno reprovado");
  }
};
int main(void) {
  printf("Primeira nota: ");
  scanf("%f", &n1);
  printf("Segunda nota: ");
  scanf("%f", &n2);
  media_aluno(&n1, &n2);
  return 0;
}