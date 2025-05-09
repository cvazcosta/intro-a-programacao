#include <stdio.h>

int main () {
  int idade, resultado;

  printf("Informe a idade: ");
  scanf(" %d", &idade);

  // Verificando se é maior de idade
  resultado = idade >= 18 ? 1 : 0;

  if (resultado == 1)
    printf("Maior de idade\n");
  else
    printf("Menor de idade\n");
    
  return 0;
}