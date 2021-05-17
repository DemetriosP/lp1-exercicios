#include <stdio.h>

#define TAM 10

void main(){
	
	int posicao1, posicao2, contador, num, nums[10], i;
	
	posicao1 = 0;
	posicao2 = 9;
	
	while(contador < 10){
		printf("Informe um numero: ");
		scanf("%d", &num);
		
		if(num == 0) {
			nums[posicao2] = num;
			posicao2--;
		} else {
			nums[posicao1] = num;
			posicao1++;
		}
		
	contador++;
	}
	
	for(i = 0; i< 10; i++){
		printf("%d\n", nums[i]);
	}
	
}
