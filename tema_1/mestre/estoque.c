#include <stdio.h>

int main () {
  char prod1[30] = "xbox";
  char prod2[30] = "ps5";

  unsigned int qtd_1 = 1200;
  unsigned int qtd_2 = 850;

  unsigned int qtd_min_1 = 1000;
  unsigned int qtd_min_2 = 1000;

  float vl_un_1 = 2300;
  float vl_un_2 = 2800;

  int comparacao1, comparacao2, comparacao_totais;
  double vl_total_1, vl_total_2;

  // Apresentar as informações iniciais
  printf("O prod. %s possui %d unidades em estoque e v. unit. de R$ %.2f\n", 
  prod1, qtd_1, vl_un_1);
  printf("O prod. %s possui %d unidades em estoque e v. unit. de R$ %.2f\n", 
  prod2, qtd_2, vl_un_2);

  // Comparar com o valor mínimo de estoque
  comparacao1 = qtd_1 > qtd_min_1;
  comparacao2 = qtd_2 > qtd_min_2;

  printf("A qtd em estoque do prod. %s é maior que o estoque mínimo?: %d\n",
  prod1, comparacao1);
  printf("A qtd em estoque do prod. %s é maior que o estoque mínimo?: %d\n",
  prod2, comparacao2);

  // Comparar os valores totais
  vl_total_1 = qtd_1 * vl_un_1;
  vl_total_2 = qtd_2 * vl_un_2;
  comparacao_totais = vl_total_1 > vl_total_2;

  printf("O valor total de %s é maior que o valor de %s?: %d\n", 
  prod1, prod2, comparacao_totais);

  return 0;
}