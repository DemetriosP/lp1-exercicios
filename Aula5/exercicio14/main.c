#include <stdio.h>

void main(){

	int num1, i, tabuada, conta, resultado, acertou;

	acertou = 0;

	do{
		printf("Informe um numero entre 2 e 9 para ver a sua tabuada: ");
		scanf("%d", &num1);

		while(num1 < 2 || num1 > 9) {
			printf("Por favor, informe o numero corretamente: ");
			scanf("%d", &num1);
		}

	}while(num1 < 2 || num1 > 9);

	for(i = 0; i <= 10; i++){

		conta = num1 * i;

		printf("%d X %d e igual a ", num1, i);
		scanf("%d", &resultado);

		if(resultado != conta){
			i = -1;
		}

	}

	printf("Voce acertou %d contas.", acertou);

}