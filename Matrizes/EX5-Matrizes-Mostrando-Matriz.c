#include <stdio.h>
#include <stdlib.h>

int m[4][4], i, j;

void preencheMatriz(){
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      printf("Digite o valor da posicao [%d, %d]: ", i+1, j+1);
      scanf("%d", &m[i][j]);
    }
  }
  system("clear");
};

int matrizCompleta(){
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
  return 0;
};

int diagonalPrincipal(){
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      if(i==j){
         printf("%d ", m[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
};

int trianguloSuperior(){
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      if((i!=j) && (i < j)){
        printf("%d ", m[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
};

int trianguloInferior(){
  for(i=0;i<=3;i++){
    for(j=0;j<=3;j++){
      if((i!=j) && (i > j)){
         printf("%d ", m[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}

int main(void) {
  int escolha;
  
  preencheMatriz();

  while(escolha != 5){
    printf("[1] Matriz Completa\n");
    printf("[2] Diagonal Princial\n");
    printf("[3] Triangulo Superior\n");
    printf("[4] Triangulo Inferior\n");
    printf("[5] Fim do programa\n");
    printf("Selecione uma opcao: ");
    scanf("%d", &escolha);
  
    system("clear");

    switch (escolha) {
    case 1:  
      matrizCompleta();
    break;
    
    case 2:  
      diagonalPrincipal();
    break;

    case 3:  
      trianguloSuperior();
    break;

    case 4:  
      trianguloInferior();
    break;

    default:
      printf("Fim do programa...");
    break;
    }
  }
  return 0;
}