#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char gab[5], prova[5], *nome[3][20];
float *nota, s, m;
int a;

void CadastroGabarito(){
  int c;
  printf("passo 1 - Cadastro de Gabarito\n");
  printf("--------------------------------\n");
  for(c=0; c<=4; c++){
    printf("Questao %d: ", c+1);
    scanf("%s", &gab[c]);
  }
};
char CadastraProva(){
  int c;
  float notaFinal = 0;
  printf("respostas dadas\n");
  for(c=0;c<=4;c++){
    printf("Questao %d: ", c+1);
    scanf("%s", &prova[c]);
    if(strcmp(&prova[c], &gab[c]) == 0){
      notaFinal = notaFinal + 2;
    }
  }
  return notaFinal;
};
int main(){
  CadastroGabarito();

  for(a=0;a<=2;a++){
    printf("-------------\n");
    printf("ALUNO %d\n", a+1);
    printf("-------------\n");
    printf("Nome: ");
    scanf("%s", &nome[a]);
    nota[a] = CadastraProva();
    s = s + nota[a];
  }
  printf("Notas Finais\n");
  printf("---------------\n");
  for(a=0;a<=2;a++){
    printf("%s, %f", nome[a], nota[a]);
  }
  m = s/3;
  printf("Meida da turma: %f", m);
}

  
/*int main(void) {
  char nome[3][20], gab[5], n[5];;
  int i, j, nota[3], Nota;

  for(i=0; i<=4; i++){
    printf("Questao %d: ", i+1);
    scanf("%s", &gab[i]);
  }
  system("clear");
  for(i=0;i<=2;i++){
    printf("-------------\n");
    printf("ALUNO %d\n", i+1);
    printf("-------------\n");
    printf("Nome: ");
    scanf("%s", &nome[i]);
    for(j=0;j<=4;j++){
      printf("%do. questao: ", j+1);
      scanf("%s", &n[j]);
    }
    system("clear");
  }
  for(i=0; i<=2; i++){
    printf("--------------------\n");
    printf("NOTA DOS ALUNOS\n");
    printf("--------------------\n");
    for(j=0; j<=4; j++){
      if(gab[j] == n[j]){
        Nota = Nota + 2;
      }
    }
    printf("%s : %d\n", nome[i], Nota);
  }
  return 0;
}
*/