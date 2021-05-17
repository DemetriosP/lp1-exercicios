#include <stdio.h>

void main(){
	
	float num1[16], num2[16];
	int i, posicao;
	posicao = 8;
	
	for(i = 0; i < 16; i++){
		printf("Informe um valor: ");
		scanf("%f", &num1[i]);
	}
	
	for(i = 0; i < 8; i++){
		num2[posicao] = num1[i];
		num2[i] = num1[posicao];
		posicao++;
	}
	
	for(i = 0; i < 16; i++){
		printf("%.2f\n", num2[i]);
	}
}
