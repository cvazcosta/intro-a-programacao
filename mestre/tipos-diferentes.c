#include <stdio.h>

int main () {
  int x = 5;
  float y = 5.1;
  char z = 'c';

  printf("x >= y: %d\n", x >= y);
  printf("x == y: %d\n", x == y);
  printf("x != y: %d\n", x != y);  

  /*
   A comparação de um int ou float com um char equivale a comparar o valor do
   primeiro com o valor da tabela ASCII do caracter informado
  */
  printf("x >= z: %d\n", x >= z);
  printf("O valor ASCII de %c é: %d\n", z, z);

  return 0;
}