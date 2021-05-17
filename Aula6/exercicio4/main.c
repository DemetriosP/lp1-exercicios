#include <stdio.h>

void main(){
	
	int pessoas;
	float media, idade, idades;
	
	while(1){
		
		printf("Informe a idade de uma pessoa : ");
		scanf("%f", &idade);
		
		if(idade == 0) break;
		
		idades = idades + idade;
		pessoas++;
	}
	
	media = idades / pessoas;
	
	printf("O numero de pessoas informadas foi: %d\n", pessoas);
	printf("A media das idade e: %.2f", media);
}
