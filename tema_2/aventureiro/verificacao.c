#include <stdio.h>

int main () {
  int num;

  printf("Informe o número: ");
  scanf(" %d", &num);

  if (num > 0)
    if (num % 2 == 0)
      printf("O número é positivo e par.\n");
    else
      printf("O número é positivo e ímpar.\n");
  else if (num < 0)
    printf("O número é negativo.\n");
  else
    printf("O número é zero.\n");

  return 0;
}