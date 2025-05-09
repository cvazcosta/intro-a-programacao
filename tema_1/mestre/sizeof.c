#include <stdio.h>

int main () {
  /*
  Talvez a perda de precisão ao usar float no desafio aventureiro era devido
  ao fato de que ele possui apenas 4 bytes.
  */ 

  // O uso do mod short reduz pela metade a capacidade de armazenamento de int

  printf("Tamanho de short int: %lu bytes\n", sizeof(short int));
  printf("Tamanho de float: %lu bytes\n", sizeof(float));
  printf("Tamanho de int: %lu bytes\n", sizeof(int));
  printf("Tamanho de long int: %lu bytes\n", sizeof(long int));
  printf("Tamanho de unsigned long int: %lu bytes\n", sizeof(unsigned long int));
  printf("Tamanho de long long int: %lu bytes\n", sizeof(long long int));
  printf("Tamanho de double: %lu bytes\n", sizeof(double));
  printf("Tamanho de long double: %lu bytes\n", sizeof(long double));

  return 0;
}