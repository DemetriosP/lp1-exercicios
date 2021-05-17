#include <stdio.h>

void main(){
	
	float paisA, paisB;
	int anos;
	
	paisA = 80000;
	paisB = 200000;
	anos = 0;
	
	do{
		paisA = paisA + (paisA * 0.03);
		paisB = paisB + (paisB * 0.015);
		anos++;
	}while(paisA < paisB);
	
	printf("Levara %d anos para o Pais A ultrapassar ou igualar a populacao do Pais B.", anos);
}
