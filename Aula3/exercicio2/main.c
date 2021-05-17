#include <stdio.h>

int main() {

	int resposta;

	const int resultado = 4;

	printf("2 + 2 e: ");
	scanf("%d", &resposta);

	if(resultado == resposta) printf("Voce acertou!");
		else printf("Voce errou!");

	return 0;
}
