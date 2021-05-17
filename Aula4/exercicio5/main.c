#include <stdio.h>
#include <conio.h>

int main() {
	
	char letra, letraMaiuscula, letraMinuscula;
	
	printf("Entre com uma letra: ");
	scanf("%c", &letra);
	
	if(letra >= 65 && letra <= 90) {
		letraMinuscula = letra + 32;
		printf("A letra minuscula e %c", letraMinuscula);
	} else if(letra >= 97 && letra <= 122) {
		letraMaiuscula = letra - 32;
		printf("A letra maiuscula e %c", letraMaiuscula);
	} else {
		printf("Voce nao digitou uma letra, o programa sera encerrado.");
	}
		
	
	return 0;
}
