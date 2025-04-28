#include <stdio.h>

int main () {
  int numero1 = 4000000000;
  long int numero2 = 4000000000;
  unsigned int numero3 = 4000000000;
  unsigned long int numero4 = 4000000000;

  printf("int: %d\n", numero1);
  printf("long int: %ld\n", numero2);
  printf("unsigned int: %u\n", numero3);
  printf("unsigned long int: %lu\n", numero4);

  return 0;
}