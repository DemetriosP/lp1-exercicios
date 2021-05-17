#include <stdio.h>

void main(){
	
	float paisA, paisB, taxaCresimentoA, taxaCresimentoB;
	int anos;
	
	do{
		printf("Informe a populacao do pais A: ");
		scanf("%f", &paisA);
		printf("Informe a taxa de crescimento da populacao do pais A: ");
		scanf("%f", &taxaCresimentoA);
		printf("Informe a populacao do pais B: ");
		scanf("%f", &paisB);
		printf("Informe a taxa de crescimento da populacao do pais B: ");
		scanf("%f", &taxaCresimentoB);
		
		if(taxaCresimentoB > taxaCresimentoA){
			printf("E impossivel para o pais A ultrapassar a populacao do pais B.");
			break;
		}
		
		do{
			paisA = paisA + (paisA * (taxaCresimentoA/100));
			paisB = paisB + (paisB * (taxaCresimentoB/100));
			anos++;
		}while(paisA < paisB);
		
		printf("Levara %d anos para o Pais A ultrapassar ou igualar a populacao do Pais B.", anos);
	}while(taxaCresimentoB < taxaCresimentoA);
}

