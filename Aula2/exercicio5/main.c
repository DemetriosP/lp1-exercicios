#include <stdio.h>

int main() {

	float valor1, valor2, valor3, valor4, valor5, media;

	printf("Informe o primeiro valor: ");
	scanf("%f", &valor1);
	printf("Informe o segundo valor: ");
	scanf("%f", &valor2);
	printf("Informe o terceiro valor: ");
	scanf("%f", &valor3);
	printf("Informe o quarto valor: ");
	scanf("%f", &valor4);
	printf("Informe o quinto valor: ");
	scanf("%f", &valor5);

	media = (valor1 + valor2 + valor3 + valor4 + valor5) /5;

	printf("A media dos valores informados e %.2f", media);

	return 0;

}
