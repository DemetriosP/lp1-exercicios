#include <stdio.h>

int main() {

	float area, pisosNecessarios, valorGasto;

	printf("Informe a quantidade de metros quandrados: ");
	scanf("%f", &area);

	pisosNecessarios = area / 0.09;

	valorGasto = pisosNecessarios * 7;

	printf("Voce precisara de %.2f pisos e gastara %.2f reais", pisosNecessarios, valorGasto);

	return 0;
}
