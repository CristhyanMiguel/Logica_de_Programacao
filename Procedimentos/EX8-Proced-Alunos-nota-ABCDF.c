#include <stdio.h>
float n1, n2;

void media_aluno(float* a, float* b){
  float media;
  media = (*a + *b)/2;
  printf("A media do aluno é: %f\n", media);
  if((media <= 10) && (media >= 9)){
    printf("Aluno nota A");
  }
  else{
    if((media <= 8) && (media >= 7)){
      printf("Aluno nota B"); 
    }
    else{
      if((media <= 6) && (media >= 5)){
        printf("Aluno nota C");
      }
      else{
        if((media <= 4) && (media >= 3)){
          printf("Aluno nota D");
        }
        else{
          if((media <= 2) && (media >= 1)){
          printf("Aluno nota E");
          }
          else{
            printf("Aluno nota F");
          }
        }
      }
    }
  }
};

int main(void) {
  printf("Informe a primeira nota: ");
  scanf("%f", &n1);

  printf("Informe a segunda nota: ");
  scanf("%f", &n2);

  media_aluno(&n1, &n2);
  
  return 0;
}