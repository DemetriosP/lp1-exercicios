#include <stdio.h>

int main(void) {

	int idade, infantil, juvenil, pesoLeve;
	float peso;

	printf("Informe a idade do participante: ");
	scanf("%d", &idade);
	printf("Informe o peso do participante: ");
	scanf("%f", &peso);

	infantil = idade >= 13 && idade <= 14;
	juvenil = idade >= 15 && idade <= 17;
	pesoLeve = infantil && peso <= 45 || juvenil & peso <= 60 || idade >=18 & peso <= 80;

	if(pesoLeve) printf("Peso leve, ");
		else printf("Peso pesado, ");

	if(infantil) {
		printf("infantil");
	} else if(juvenil) {
		printf("juvenil");
	} else
		printf("adulto");

	return 0;
}