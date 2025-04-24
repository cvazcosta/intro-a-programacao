#include <stdio.h>

int main () {
  // O valor máx p/ int = 2.147.483.647
  int numero1 = 2147483648;
  // O valor máx p/ u-int = 4.294.967.295
  unsigned int numero2 = 3000000000;

  printf("Variável int: %d\n", numero1);
  printf("Variável u-int: %u\n", numero2);
}