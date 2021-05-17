#include <stdio.h>

void main() {

	int contador, num1, num2, num3, fatorialN, fatorialR, n, r, x, fatorialX;
	int res;

	fatorialN = 1;
	fatorialR = 1;
	fatorialX = 1;

	printf("Informe dois numeros.\n");
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	n = num1;
	r = num2;
	num3 = num1 - num2;
	x = num3;

	for(contador = 0; contador < num1; contador++){
		fatorialN = fatorialN * n;
		n--;
	}

	for(contador = 0; contador < num2; contador++){
		fatorialR = fatorialR * r;
		r--;
	}

	for(contador = 0; contador < num3; contador++){
		fatorialX= fatorialX * x;
		x--;
	}

	res = fatorialN / (fatorialR * (fatorialX));

	printf("Fatorial n %d", fatorialN);
	printf("Fatorial r %d", fatorialR);
	printf("Fatorial x %d", fatorialX);
	printf("Resposta %d", res);
}