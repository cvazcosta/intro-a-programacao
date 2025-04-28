#include <stdio.h>

int main () {
  int numero1, numero2;
  float quociente;

  printf("Informe um número inteiro: ");
  scanf("%d", &numero1);

  printf("Informe outro número inteiro: ");
  scanf("%d", &numero2);

  quociente = (float) numero1 / numero2;

  printf("O resultado é: %.2f\n", quociente);
}