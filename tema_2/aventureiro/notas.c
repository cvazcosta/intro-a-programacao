#include <stdio.h>

int main () {
  int nota;

  printf("Informe a nota: ");
  scanf(" %d", &nota);

  if (nota < 50)
    printf("Nota: F\n");
  else if (nota >= 50 && nota < 60)
    printf("Nota: E\n");
  else if (nota >= 60 && nota < 70)
    printf("Nota: D\n");
  else if (nota >= 70 && nota < 80)
    printf("Nota: C\n");
  else if (nota >= 80 && nota < 90)
    printf("Nota: B\n");
  else
    printf("Nota A\n");

  return 0;
}