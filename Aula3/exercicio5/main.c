#include <stdio.h>

int main() {

	int num, resto;

	printf("Informe o numero: ");
	scanf("%d", &num);

	resto = num % 2;

	if(resto == 0) printf("O numero e par");
		else printf("O numero e impar");
}
