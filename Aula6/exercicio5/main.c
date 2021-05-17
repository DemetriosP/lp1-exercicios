#include <stdio.h>

void main(){
	
	int pessoas;
	float media, idade, idades, menorIdade, maiorIdade;
	
	menorIdade = 100000;
	
	while(idade != 0){
		
		printf("Informe a idade de uma pessoa : ");
		scanf("%f", &idade);
		
		if(idade != 0){
			idades = idades + idade;
			pessoas++;
		
			if(idade > maiorIdade) maiorIdade = idade;
			if(idade < menorIdade) menorIdade = idade;
		}
		
	}
	
	media = idades / pessoas;
	
	printf("O numero de pessoas informadas foi: %d\n", pessoas);
	printf("A media das idade e: %.2f\n", media);
	printf("A menor idade informada foi: %.0f\n", menorIdade);
	printf("A maior idade informada foi: %.0f", maiorIdade);
}
