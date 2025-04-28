#include <stdio.h>

int main () {
  int numero_i, numero_d, resultado;

  printf("Informe o número 1: ");
  scanf("%d", &numero_i);

  printf("Informe o número 2: ");
  scanf("%d", &numero_d);

  /*
  A operação de incremento equivale a: 
  numero_i++ <-> numero_i = numero_i + 1 <-> numero_i += 1 
  */
  numero_i++;

  /*
  A operação de decremento equivale a: 
  numero_d-- <-> numero_d = numero_d - 1 <-> numero_d -= 1
  */  
  numero_d--;

  printf("\nNúmero 1 após o incremento: %d\n", numero_i);
  printf("Número 2 após o decremento: %d\n", numero_d);

  /* O pós-incremento equivale a atribuir primeiro e incrementar depois:
  resultado = numero_i; 
  numero_i++;
  */
  resultado = numero_i++;

  printf("Resultado usando pós-incremento: %d\n", resultado);
  printf("Número 1 usando pós-incremento: %d\n", numero_i);
  
  /* O pré-incremento equivale a incrementar primeiro e atribuir depois:
  numero_i++;
  resultado = numero_i;
  */
  resultado = ++numero_i;

  printf("Resultado usando pré-incremento: %d\n", resultado);
  printf("Número 1 usando pré-incremento: %d\n", numero_i);

  // A mesma lógica se aplica às operações de pós e pré-decremento

}