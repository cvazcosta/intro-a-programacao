#include <stdio.h>

int main () {
  int idade, renda;

  printf("Informe sua idade: ");
  scanf(" %d", &idade);

  if (idade <= 18 || idade >= 60) {
    printf("Informe sua renda: ");
    scanf(" %d", &renda);  
    if(renda < 2000) 
      printf("Cliente apto a receber desconto.\n");    
    else
      printf("Cliente inapto a receber o desconto: renda maior ou igual a 2k\n");
  }
  else
    printf("Cliente inapto a receber o desconto: idade fora do intervalo.\n");

  return 0;
}