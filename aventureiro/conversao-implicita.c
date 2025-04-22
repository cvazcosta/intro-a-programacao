#include <stdio.h>

int main () {
  // O resultado é 13.50 porque a var 'a' é convertida implicitamente para float
	int a = 10;
	float b = 3.5;
	float soma = a + b;
	printf("Soma após conversão implícita: %.2f\n", soma);
	return 0;
}