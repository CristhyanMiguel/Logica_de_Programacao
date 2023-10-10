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