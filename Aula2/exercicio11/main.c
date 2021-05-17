#include <stdio.h>

int main() {

	int num1, num2, num3, equacaoR, equacaoS, equacaoD;

	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	printf("Informe o terceiro numero: ");
	scanf("%d", &num3);

	equacaoR = (num1 * num1) + (num2 * num2);
	equacaoS = (num2 * num2) + (num3 * num3);
	equacaoD = (equacaoR + equacaoS) / 2;

	printf("O valor da expressao R e %d", equacaoR);
	printf("O valor da expressao S e %d", equacaoS);
	printf("O valor da expressao D e %d", equacaoD);

	return 0;
}
