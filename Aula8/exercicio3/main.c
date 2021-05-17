#include <stdio.h>

#define TAM 30

void main(){
	
	int nums[TAM][TAM], i, j;
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){	
			nums[i][j] = 0;
		}	
	}
	
	i = 0;
	
	for(j = 1; j < TAM - 1; j++){		
		nums[i][j] = 1;		
	}
	
	i = TAM - 1;
	
	for(j = 1; j < TAM - 1; j++){			
		nums[i][j] = 1;		
	}
	
	j = 0;
	
	for(i = 0; i < TAM; i++){		
		nums[i][j] = 1;
	}
	
	j = TAM - 1;
	
	for(i = TAM - 1; i >= 0; i--){		
		nums[i][j] = 1;
	}
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}
	
}