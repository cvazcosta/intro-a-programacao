#include <stdio.h>

int main () { 
  int numero;

  printf("Informe o número: ");
  scanf("%d", &numero);

  if (numero % 2 == 0) {
    printf("O número informado é par.\n");
  } else {
    printf("O número informado é impar.\n");
  }

  return 0;
}