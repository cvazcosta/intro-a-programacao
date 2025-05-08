#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main () {
  int opcao1, opcao2;
  char opcao_str1[15];
  char opcao_str2[15];

  printf("1 - Pedra\n");
  printf("2 - Papel\n");
  printf("3 - Tesoura\n");
  printf("Escolha uma das três opções: ");
  scanf("%d", &opcao1);

  // Determinando a opção da máquina
  srand(time(0));
  opcao2 = rand() % 3 + 1;

  // Atribuindo variável para mostrar a escolha do jogador
  if (opcao1 == 1)
    strcpy(opcao_str1, "Pedra");
  else if (opcao1 == 2)
    strcpy(opcao_str1, "Papel");
  else {
    strcpy(opcao_str1, "Tesoura");
  }

  // Atribuindo variável para mostrar a escolha da máquina
  if (opcao2 == 1)
    strcpy(opcao_str2, "Pedra");
  else if (opcao2 == 2)
    strcpy(opcao_str2, "Papel");
  else {
    strcpy(opcao_str2, "Tesoura");
  }    

  // Informando as opções do jogador e da máquina
  printf("\nVocê escolheu %s!\n", opcao_str1);
  printf("A máquina escolheu %s!\n", opcao_str2);

  if (opcao1 == opcao2)
    printf("%s = %s -> Empate!\n", opcao_str1, opcao_str2);
  else {
    switch (opcao2)
    {    
      case 1: // Escolha da máquina: Pedra
        if (opcao1 == 2)
          printf("Papel > Pedra -> Você ganhou!\n");      
        else
          printf("Tesoura < Pedra -> Você perdeu!\n");
      break;

      case 2: // Escolha da máquina: Papel      
        if (opcao1 == 1)
          printf("Pedra < Papel -> Você perdeu!\n");      
        else
          printf("Tesoura > Papel -> Você ganhou!\n");
      break;

      case 3: // Escolha da máquina: Tesoura      
        if (opcao1 == 1)
          printf("Pedra > Tesoura -> Você ganhou!\n");
        else
          printf("Papel < Tesoura -> Você perdeu!\n");      
      break;  
    }
  }  

  return 0;
}