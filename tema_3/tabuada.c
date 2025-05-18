#include <stdio.h>

int main () {

  int num, prod;

  printf("Informe um número para obter a tabuada: ");
  scanf(" %d", &num);

  for (int i = 1; i <= 10; i++) 
  {
    prod = num * i;
    printf("%d x %d = %d\n", num, i, prod);
  }
  
  return 0;
}