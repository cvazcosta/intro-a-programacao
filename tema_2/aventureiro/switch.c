#include <stdio.h>

int main () {
  int opcao;

  printf("Digite a opção: ");
  scanf(" %d", &opcao);

  switch (opcao)
  {
  case 1:
    printf("Opção 1\n");
    break;

  case 2:
    printf("Opção 2\n");
    break;
  
  default:
    printf("Opção inválida\n");
    break;
  }

  return 0;
}