#include <stdio.h>

int main () {
  int num1, num2;

  printf("Informe o primeiro número: ");
  scanf("%d", &num1);

  printf("Informe o segundo número: ");
  scanf("%d", &num2);

  if (num1 > 0 || num2 > 0) {
    printf("Pelo menos um dos números é positivo.\n");
  } else {
    printf("Ambos os números são negativos.\n");
  }
}