#include <stdio.h>

#define TAM 10

void main(){
	
	 int teste1[TAM], teste2[TAM], i;
	 
	 for(i = 0; i< TAM; i++){
	 	printf("Informe um numero: ");
	 	scanf("%d", &teste1[i]);
	 }
	 
	 for(i = 0; i < TAM; i++){
	 	if(teste1[i] % 2 == 0) teste2[i] = teste1[i] * 5;
	 	if(teste1[i] % 2 != 0) teste2[i] = teste1[i] + 5;
	 }
	 
	 for(i = 0; i < TAM; i++){
	 	printf("%d, ", teste1[i]);
	 	printf("%d, ", teste2[i]);
	 }
	 
}
