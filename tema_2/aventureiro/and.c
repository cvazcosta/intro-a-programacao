#include <stdio.h>

int main () {
  int num1, num2;

  printf("Informe o primeiro número: ");
  scanf("%d", &num1);

  printf("Informe o segundo número: ");
  scanf("%d", &num2);

  if (num1 > 0 && num2 > 0) {
    printf("Os dois números são positivos.\n");
  } else {
    printf("Pelo menos um dos números é negativo.\n");
  }

  return 0;
}