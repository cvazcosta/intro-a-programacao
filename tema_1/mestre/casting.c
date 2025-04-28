#include <stdio.h>

int main () {
  float a = 10.2;
  int b = 10;

  printf("a > b: %d\n", a > b);
  printf("a == b: %d\n", a == b);

  // Abaixo segue um exemplo de casting de float -> int
  printf("a > b: %d\n", (int) a > b);
  printf("a == b: %d\n", (int) a == b);
}