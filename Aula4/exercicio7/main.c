#include <stdio.h>
#include <conio.h>

int main() {
	
	int num1, num2, conta, comecarConta;
	char operador;
	
	printf("Informe dois numeros\n");
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	printf("Informe o operador: ");
	operador = getchar();
	scanf("%c", &operador);
	printf("%c", operador);
	
	switch(operador) {
		
		case '+':
			conta = num1 + num2;
			printf("O resultado da conta e %d", conta);
			break;
		
		case '-':
			conta = num1 - num2;
			printf("O resultado da conta e %d", conta);
			break;
		
	 	case '*':
			conta = num1 - num2;
			printf("O resultado da conta e %d", conta);
			break;
		
		case '/':
			conta = num1 / num2;
			printf("O resultado da conta e %d", conta);
			break;
		
		default:
			printf("Operacao invalida! Entre somente com +, -, * ou /.");
	}
	return 0;
	
}

