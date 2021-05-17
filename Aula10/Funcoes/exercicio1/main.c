#include <stdio.h>

void main(){
	
	int num;
	
	printf("Informe um numero: ");
	scanf("%d", &num);
	
	if(numeroPrimo(num)) printf("O numero e primo");
	else printf("O numero nao e primo");
}

