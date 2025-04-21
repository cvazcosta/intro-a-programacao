#include <stdio.h>

int main () {

  int numero1, numero2, soma, diferenca, produto, quociente;
  
  printf("Informe um número inteiro: ");
  scanf("%d", &numero1);

  printf("Informe outro número inteiro: ");
  scanf("%d", &numero2);

  soma = numero1 + numero2;
  diferenca = numero1 - numero2;
  produto = numero1 * numero2;
  quociente = numero1 / numero2;

  printf("A soma é: %d\n", soma);
  printf("A diferença é: %d\n", diferenca);
  printf("O produto é: %d\n", produto);
  printf("O quociente é: %d\n", quociente);
}