#include <stdio.h>

#define TAM 7

void main(){
		
	char letras[TAM], antecessora;
	int i, j, confirmacao;
	
	for(i = 0; i <TAM; i++){
		printf("Informe uma letra: ");
		scanf(" %c", &letras[i]);
	}
	
	for(i = 0; i < TAM; i++){
		for(j = 0; j < TAM; j++){
			if(letras[j] > letras[i]){
				antecessora = letras[j];
				letras[j] = letras[i];
				letras[i] = antecessora;
			}
		}
	}
	
	for(i = 0;i < TAM; i++){
		printf("%c", letras[i]);
	}
}
