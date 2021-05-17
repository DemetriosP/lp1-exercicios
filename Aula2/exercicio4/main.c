#include <stdio.h>

int main() {

	float metros, centimetros;

	printf("Informe o numero em centimetros: ");
	scanf("%f", &centimetros);

	metros = centimetros / 100;

	printf("%.2f centimetros sao %.2f metros", centimetros, metros);

	return 0;
}
