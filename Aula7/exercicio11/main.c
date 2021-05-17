#include <stdio.h>

#define TAM 10

void main(){

	char letra, letras[TAM];
	int i, consultas, naoEsta;
	
	naoEsta = 1;

	consultas = 3;

	for(i = 0;i < TAM;i++){
		printf("Informe uma letra: ");
		scanf(" %c", &letras[i]);
	}

	do{
		printf("Informe uma letra para verificar sua existencia no vetor: ");
		scanf(" %c", &letra);

		for(i = 0;i < TAM;i++){

			if(letra == letras[i]){
				printf("O letra informada ja esta no vetor, na posicao %d.\n", i);
				naoEsta = 0;
			}
		
		}
		
		if(naoEsta == 1) printf("A letra informada nao esta no vetor.\n");

		consultas--;

	}while(consultas > 0);

}
