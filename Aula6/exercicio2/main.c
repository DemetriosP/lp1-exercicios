#include <stdio.h>

void main() {
	
	int parOuImpar, limite, i;
	
	do{
		printf("Informe um numero para ser o limite superior: ");
		scanf("%d", &limite);
		printf("Escolha entre par ou impar, digite 0 para par e 1 para impar: ");
		scanf("%d", &parOuImpar);
	}while(limite == 0 || parOuImpar != 1 && parOuImpar != 0);
	
	for(i = 0;i <= limite; i++){
		if(i % 2 == 0 && parOuImpar == 0) printf("%d", i);
		if(i % 2 != 0 && parOuImpar == 1) printf("%d", i);
	}
}