#include <stdio.h>

int main()
{
  int i;

  // Definindo uma matriz bidimensional com nome, nota em mat e port
  char *aluno[3][3] = {
    {"Aluno 1", "8.5", "7.0"},
    {"Aluno 2", "6.7", "8.5"},
    {"Aluno 3", "5.2", "8.9"}
  };

  printf("Informe o número do aluno: ");
  scanf(" %d", &i);

  printf("%s\n", aluno[i - 1][0]);
  printf("Matemática: %s\n", aluno[i - 1][1]);
  printf("Português: %s\n", aluno[i - 1][2]);

  return (0);

}