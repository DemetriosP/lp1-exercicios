#include <stdio.h>

void main(){
	
	int tabuada, numero, conta;
	
	printf("Informe um numero para ver a sua tabuada: ");
	scanf("%d", &tabuada);
	
	for(numero = 0; numero <= 10; numero++){
		
		conta = tabuada * numero;
		printf("%d X %d = %d\n", tabuada, numero, conta);
	}

	while(numero <= 10){
		conta = tabuada * numero;
		printf("%d X %d = %d\n", tabuada, numero, conta);
		numero++;
	}
}
