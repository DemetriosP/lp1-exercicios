#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void main(){

    int tentativa = TAM, nums[TAM], num, repetido, posicao2, descobriu, secreto, posicao;
    descobriu = 0;
    srand(time(NULL));
    secreto = rand() % 101;
    repetido = 0;

    while(tentativa > 0 && descobriu == 0){
    	
    	for(posicao = 0; posicao < TAM; posicao++){
    		nums[posicao] = -1;
		}

        do{

        printf("Informe um numero: ");
        scanf("%d", &num);

            for(posicao = 0; posicao < TAM; posicao++){
            	
                if(nums[posicao] == num){
                    printf("Numero ja foi informado\n");
                    repetido = 1;
                    }
            }

        }while(repetido == 1);

        nums[posicao2] = num;

        if(nums[posicao2] > secreto) printf("E maior que o numero secreto\n");
        if(nums[posicao2] < secreto) printf("E menor que o numero secreto\n");
        if(nums[posicao2] == secreto){
            printf("Voce acertou o numero secreto");
            descobriu = 1;
        }

    }

}