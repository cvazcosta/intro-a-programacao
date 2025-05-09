#include <stdio.h>

int main () {
  int num1, num2, maior;

  printf("Informe o primeiro número: ");
  scanf(" %d", &num1);

  printf("Informe o segundo número: ");
  scanf(" %d", &num2);

  num1 > num2 ? (maior = num1) : (maior = num2);

  printf("O número maior é: %d\n", maior);

  return 0;
}