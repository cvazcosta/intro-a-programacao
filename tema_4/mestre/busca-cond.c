#include <stdio.h>

int main()
{
  int target;
  int found = 0;
  int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  puts("Inform the target number: ");
  scanf(" %d", &target);

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (matriz[i][j] == target)
      {
        printf("Target found at [%d][%d]\n", i, j);
        found = 1;
        break;
      }      
    }
    if (found)
    {
      break;
    }    
  }
  if (!found)
  {
    printf("Element not found.\n");
  }
  
  return (0);
}