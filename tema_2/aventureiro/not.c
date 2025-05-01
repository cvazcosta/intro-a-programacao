#include <stdio.h>

int main () {
  int num1 = 2;

  // printf("Informe um número: ");
  // scanf("%d", &num1);

  if (!(num1 <= 0)) {
    printf("O número informado é maior que zero: %d\n", !(num1 <= 0));
  } else {
    printf("O número informado é menor ou igual a zero: %d\n", !(num1 <= 0));
  }

  return 0;
}