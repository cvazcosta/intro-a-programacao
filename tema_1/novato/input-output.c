#include <stdio.h>

int main () {
  int idade;
  float altura;
  char primeiro_nome[60];
  char opcao;
  long saldo;

  /*
  fgets resolve parcialmente o problema do scanf de somente considerar a
  primeira palavra antes de dar espaço, porém ele só considera 29 caracteres
  e pula linha automaticamente
  */
  printf("Digite seu primeiro nome: ");
  scanf("%s", primeiro_nome);  

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite a sua altura: ");
  scanf("%f", &altura);

  printf("Digite seu saldo: ");
  scanf("%ld%*c", &saldo);

  /*
  A inclusão do espaço antes do delimitador se faz necessária para dar 
  a possibilidade de digitação ao usuário, visto que por padrão ele 
  considera o enter dado no passo anterior como um caractere (\0)
  */

  printf("Escolha a opção (A-E): ");
  scanf("%c", &opcao); //

  printf("\nOlá %s, tudo bem?\n", primeiro_nome);
  printf("Você tem %d anos de idade e %.2fm de altura.\n", idade, altura);
  printf("Seu saldo é de R$ %ld\n", saldo);
  printf("A opção escolhida foi a %c.\n", opcao);
  printf("Até a próxima!\n");

  return 0;

}