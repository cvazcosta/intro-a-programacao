#include <stdio.h>

int main () {
  int idade;
  float altura;
  char nome_completo[100];
  char opcao;

  printf("Digite seu nome e o último sobrenome: ");
  fgets(nome_completo, 100, stdin);  

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite a sua altura: ");
  scanf("%f", &altura);

  printf("Escolha a opção (A-E): ");
  scanf(" %c", &opcao); //A inclusão do espaço antes do delimitador se faz necessária para dar a possibilidade de digitação ao usuário, visto que por padrão ele considera o enter dado no passo anterior como um caractere (\0)

  printf("Olá %sTudo bem?\nVocê tem %d anos de idade e %.2fm de altura. A opção escolhida foi a %c.\nAté a próxima!\n", nome_completo, idade, altura, opcao);

  return 0;

}