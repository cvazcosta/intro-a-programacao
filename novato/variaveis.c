#include <stdio.h>

int main () {
  int idade = 34;
  float altura = 1.8; 
  char nome[20] = "Carlos";
  char* sobrenome = "Costa";
  printf("Meu primeiro nome é: %s\nMeu sobrenome é: %s\nTenho %d anos e %.2f metros de altura\n", nome, sobrenome, idade, altura);
  return 0;
}