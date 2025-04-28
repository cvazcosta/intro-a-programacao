#include <stdio.h>

int main () {
  int numero1, numero2, numero3, numero4;

  printf("Informe o primeiro número: ");
  scanf("%d", &numero1);

  printf("Informe o segundo número: ");
  scanf("%d", &numero2);

  printf("Informe o terceiro número: ");
  scanf("%d", &numero3);

  printf("Informe o quarto número: ");
  scanf("%d", &numero4);

  // -> numero1 = numero1 + numero2
  numero1 += numero2;
  // -> numero2 = numero2 - numero3
  numero2 -= numero3;
  // -> numero3 = numero3 * numero4
  numero3 *= numero4;
  // -> numero4 = numero4 / numero1
  numero4 /= numero1;

  printf("\nNúmero 1: %d\n", numero1);
  printf("Número 2: %d\n", numero2);
  printf("Número 3: %d\n", numero3);
  printf("Número 4: %d\n", numero4);
}