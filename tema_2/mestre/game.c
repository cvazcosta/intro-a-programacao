#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main () {
  int palpite, opcao, num, resultado;

  // Pedindo ao usuário o número
  printf("Escolha um número de 0 a 9: ");
  scanf(" %d", &palpite);

  // Verificando entrada do usuário
  if (palpite >= 0 && palpite <= 9) {
    // Pedindo ao usuário a opção a ser testada
    printf("1- Maior que\n");
    printf("2- Menor que\n");
    printf("3- Igual a\n");
    printf("Escolha sua opção: ");
    scanf(" %d", &opcao);
  
    // Gerando o número aleatório da máquina
    srand(time(0));
    num = rand() % 10;
  
    printf("A máquina escolheu %d!\n", num);
  
    // Verificando resultado do jogo
    switch (opcao)
    {
    case 1:
        resultado = palpite > num ? 1 : 0;
      break;
    
    case 2:
      resultado = palpite < num ? 1 : 0;
    break;
  
    case 3:
      resultado = palpite == num ? 1 : 0;
      break;
  
    default:
        printf("Opção inválida!\n");
      break;
    }
  } else {
    printf("Entrada inválida!\n");
  }

  // Informando o resultado
  if (resultado == 1)
    printf("Você venceu!\n");
  else
    printf("Você perdeu!\n");

  return 0;
}