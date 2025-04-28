#include <stdio.h>

int main () {
  double numero1 =      3.141592653589793;
  long double numero2 = 3.14159265358979323846;

  /*
  Da mesma forma que na aula eu perco precisão nas casas decimais a partir do
  15º dígito
  */

  printf("Double: %.15f\n", numero1);
  printf("Long Double: %.21Lf\n", numero2);

  return 0;
}