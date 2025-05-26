#include <stdio.h>

int main () {
  int i, j;

  
  for (i = 1; i <= 5; i++)
  {
    char letra = 'A';

    for (j = 1; j <= i; j++)
    {
      printf("%c ", letra);
      letra++;
    }
    printf("\n");    
  }

  return (0);
  
}