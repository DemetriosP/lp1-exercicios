#include <stdio.h>

void main() {
	
	float saldo, saque, deposito, sair;
	char opcao;
	sair = 1;
		
	do{
		printf("(a) consulta saldo;\n(b) saque;\n(c) deposito;\n(d) sair\n");
		scanf(" %c", &opcao);
	
		switch(opcao){
			
			case 'a':
				printf("Seu saldo e %.2f\n", saldo);
				break;
			case 'b':
				if(saldo == 0){
					printf("Voce nao tem saldo para sacar.\n");
					break;
				}
				else{
					printf("Informe o valor a ser sacado: ");
					scanf("%f", &saque);
					saldo = saldo - saque;
					break;
				}	
			case 'c':
				printf("Informe o valor a ser depositado: ");
				scanf("%f", &deposito);
				saldo = saldo + saque;
				break;
			case 'd':
				sair = 0;
				break;
			default:
				printf("Por favor, entre com uma opcao valida.\n");
		}
	}while(sair);
	
}