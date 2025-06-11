#include <stdio.h>

int main()
{
  
  int l, c;

  int matriz1[2][2] = {
    {1, 2},
    {3, 4}
  };

  int matriz2[2][2] = {
    {5, 6},
    {7, 8}
  };

  int matrizSoma[2][2];

  for (l = 0; l < 2; l++)
  {
    for (c = 0; c < 2; c++)
    {
      matrizSoma[l][c] = matriz1[l][c] + matriz2[l][c];
      printf("Matriz Soma[%d][%d]: %d\n", l, c, matrizSoma[l][c]); 
    }    
  }

  return (0);
  
}