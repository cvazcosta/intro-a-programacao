#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  int opcao, palpite, numeroSecreto;

  printf("1 - Jogar\n");
  printf("2 - Ler as regras\n");
  printf("Informe a opção desejada: ");
  scanf(" %d", &opcao);

  switch (opcao)
  {
  case 1:
    /*
    time(0):
      Esta função retorna o tempo atual como um valor do tipo time_t. 
      Este valor é geralmente um inteiro que representa o número de segundos 
      desde a "época" (1 de janeiro de 1970, 00:00:00 UTC). 
    srand(time(0)):
      A função srand() é utilizada para definir a semente para o gerador de 
      números pseudoaleatórios que é usado pela função rand(). Ao passar o 
      valor retornado por time(0) para srand(), a semente é definida como o 
      tempo atual, o que garante que, a cada execução do programa, a sequência 
      de números aleatórios gerados seja diferente. 
    Por que usar time(0)?
      O principal objetivo de usar time(0) como semente é garantir que os 
      números aleatórios gerados sejam diferentes a cada vez que o programa é 
      executado. Sem essa inicialização, rand() sempre retornaria a mesma 
      sequência de números, pois ele sempre utilizaria a mesma semente inicial. 
    */
    srand(time(0));
    numeroSecreto = rand();
    // Imprimi o número aleatório só para entender como ele vinha
    printf("O número aleatório foi: %d\n", numeroSecreto);
    // O módulo da divisão por 10 sempre gera um valor de 0 a 9
    // Se fosse por 100 era 0 a 99 e assim por diante
    numeroSecreto %= 10;

    printf("Informe um número de 0 a 9: ");
    scanf(" %d", &palpite);
    if (palpite == numeroSecreto)
      printf("Você acertou! O número secreto era: %d\n", numeroSecreto);
    else
      printf("Você errou! O número secreto era: %d\n", numeroSecreto);
    break;
  
  default:
    printf("Opção inválida\n");
    break;
  }

  return 0;

}