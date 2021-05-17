#include <stdio.h>
#include <stdlib.h>

#define TAM 30

void main(){

	int posicoes[TAM][TAM], i, j, posicao, k,l, diferente, auxiliar;

	srand(time(NULL));

	auxiliar = 0;

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

		posicoes[i][j] = posicao;

		}

	}

	for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            for(k = 0; k < TAM; k++){
                for(l = 0; l < TAM; l++){
                    if(posicoes[i][j] < posicoes[k][l]){
                        auxiliar = posicoes[i][j];
                        posicoes[i][j] = posicoes[k][l];
                        posicoes[k][l] = auxiliar;
                    }
                }
            }
        }
	}

	for(i = 0; i < TAM; i++){
			for(j = 0; j < TAM; j++){
				printf("%d ", posicoes[i][j]);
			}
			printf("\n");
		}

}
