#include <stdio.h>
#include <stdlib.h>

#define TAM 30

void main(){
	
	int posicoes[TAM][TAM], i, j, posicao, k,l, diferente, menorPosicao, maiorPosicao, opcao;
	
	srand(time(NULL));
	
	for(i = 0;i < TAM;i++){
		for(j = 0; j < TAM; j++) {
			posicoes[i][j] = -1;
		
		do{	
			
			diferente = 10;
			
			posicao = rand() % 901;	
			
			for(k = 0; k < TAM;k++){
				for(l = 0; l < TAM; l++){
					if(posicao == posicoes[k][l]) diferente = 20;
				}
				
			}	
				
		}while(diferente == 20);
		
		if(posicao < menorPosicao) menorPosicao = posicao;
		if(posicao > maiorPosicao) maiorPosicao = posicao;
		
		posicoes[i][j] = posicao;
		
		}
		
	}
	
	for(i = 0; i < TAM; i++){
			for(j = 0; j < TAM; j++){
				printf("%d ", posicoes[i][j]);
			}
			printf("\n");
		}	
		
	do{
		printf("\n\nOpcoes:\n0 - Ver maior numero na matriz\n1 - Ver menor numero na matriz\n");
		scanf("%d", &opcao);
	}while(opcao != 0 && opcao != 1);
	
	if(opcao == 0) printf("Maior numero na matriz e %d", maiorPosicao);
	else printf("Menor numero na matriz e %d", menorPosicao);
	
}