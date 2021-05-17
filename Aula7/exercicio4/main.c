#include <stdio.h>

#define TAM 10

void main(){
	
	float nums[TAM], menor;
	int i, j, confirmacao;
	
	for(i = 0; i <TAM; i++){
		printf("Informe um valor: ");
		scanf("%f", &nums[i]);
	}
	
	printf("Informe 0 ou 1: ");
	scanf("%d", &confirmacao);
	
	if(confirmacao == 0){
		for(i = 0; i < TAM; i++){
			for(j = 0; j < TAM; j++){
				if(nums[j] > nums[i]){
					menor = nums[j];
					nums[j] = nums[i];
					nums[i] = menor;
				}
			}
		}
	}
	
	if(confirmacao == 1){
		for(i = 0; i < TAM; i++){
			for(j = 0; j < TAM; j++){
				if(nums[j] < nums[i]){
					menor = nums[j];
					nums[j] = nums[i];
					nums[i] = menor;
				}
			}
		}
	}
	
	for(i = 0;i < TAM; i++){
		printf("%d\n", nums[i]);
	}
	
}