#include <stdio.h>

int main () {
  int idade;
  float altura;

  printf("Informe o valor da idade: ");
  scanf("%d", &idade);

  printf("Informe o valor da altura: ");
  scanf("%f", &altura);  

  if (idade >= 18 && idade <= 30 && altura >= 1.75) {
    printf("Você atende aos requisitos mínimos.\n");
  } else {
    printf ("Você não atende aos requisitos mínimos.\n");
  }

  return 0;
}

