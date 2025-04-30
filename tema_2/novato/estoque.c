#include <stdio.h>

int main () {
  float temperatura, umidade;
  unsigned int estoque;

  printf("Informe a temperatura: ");
  scanf("%f", &temperatura);

  printf("Informe a umidade: ");
  scanf("%f", &umidade);

  printf("Informe a quantidade em estoque: ");
  scanf("%u", &estoque);

  if (temperatura > 30) {
    printf("\nA temperatura está acima dos parâmetros.\n");
  } else {
    printf("\nA temperatura está dentro dos parâmetros\n");
  }

  if (umidade > 80) {
    printf("A umidade está acima dos parâmetros.\n");
  } else {
    printf("A umidade está dentro dos parâmetros.\n");
  }

  if (estoque >= 20) {
    printf("A quantidade em estoque está dentro do limite.\n");
  } else {
    printf("A quantidade em estoque está %u unidade(s) abaixo do limite.\n",
    (20 - estoque));
  }

  return 0;
}