#include <stdio.h>
/*
A intenção do exercício era provocar um overflow a fim de ver se
na prática o modificador long int tornava o int capaz de armazenar
um valor maior do que o limite do int. No Ubuntu isso funciona.
No Windows 11 do professor, não. 
*/
int main () {
  int numero1 = 2147483647;
  long int numero2 = 2147483647;

  printf("Número int: %d\n", numero1);
  printf("Número l-int: %ld\n", numero2);

  numero1++;
  numero2++;

  printf("Número int após incremento: %d\n", numero1);
  printf("Número l-int após incremento: %ld\n", numero2);
}