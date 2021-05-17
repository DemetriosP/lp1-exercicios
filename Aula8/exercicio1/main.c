#include <stdio.h>

#define TAM 3

void main(){
	
	int nums[TAM][TAM], i, j;
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){	
			printf("Informe um numero: ");
			scanf("%d", &nums[i][j]);
		}	
	}
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	
}