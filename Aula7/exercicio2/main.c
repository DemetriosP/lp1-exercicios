#include <stdio.h>

void main(){
	
	float notas[7], maior, menor, media;
	int i;
	
	for(i = 0; i < 7; i++){
		printf("Informe um numero: ");
		scanf("%f", &notas[i]);
		media = media + notas[i];
		if(notas[i] < menor) menor = notas[i];
		if(notas[i] > maior) maior = notas[i; 
	}
	
	printf("Media e ", media / 7);
	printf("Menor e ", menor);
	printf("Maior e ", maior);
	
}