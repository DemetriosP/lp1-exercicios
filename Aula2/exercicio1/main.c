#include <stdio.h>

int main() {

	float num1, num2, soma, sub, multi, div;

	printf("Informe o primeiro valor: ");
	scanf("%f", &num1);
	printf("Informe o segundo valor: ");
	scanf("%f", &num2);

	soma = num1 + num2;
	sub = num1 - num2;
	multi = num1 * num2;
	div = num1 / num2;

	printf("A soma e %.2f \nA subtracao e %.2f \nA multiplicacao e %.2f \nA divisao e %.2f", soma, sub, multi, div);

	return 0;
}
