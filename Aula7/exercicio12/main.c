#include <stdio.h>

#define TAM 10

void main(){
	
	char letra, letras[TAM];
	int i, consultas, posicao, posicoes[TAM], diferente, j;
	
	srand(time(NULL));
	
	consultas = 3;
	
	for(i = 0;i < TAM;i++){
		
		posicoes[i] = -1;
				
		do{	
			
			diferente = 10;
			
			posicao = rand() % 10;	
			
			for(j = 0; j < TAM;j++){
				
				if(posicao == posicoes[j]) diferente = 20;
				
			}	
				
		}while(diferente == 20);
		
		posicoes[i] = posicao;
	}	
	
	for(i = 0;i < TAM;i++){
		printf("Informe uma letra: ");
		scanf("% c", letras[posicoes[i]]);
	}
	

	do{
		printf("Informe uma letra para verificar sua existencia no vetor: ");
		scanf("% c", letra);
	
		for(i = 0;i < TAM;i++){
			
			if(letra == letras[i]){
				printf("O letra informada ja esta no vetor, na posicao %d", i);
			}
		
		}
		
		consultas--;
		
	}while(consultas < 0); 
	
}
