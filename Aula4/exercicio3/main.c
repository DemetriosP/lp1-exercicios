#include <stdio.h>
#include <conio.h>

int main() {
	
	char letraMinuscula, letraMaiuscula;
	
	printf("Entre com uma letra minuscula: ");
	scanf("%c", &letraMinuscula);
	
	if(letraMinuscula >= 65 && letraMinuscula <= 90) {
		printf("Voce colocou uma letra maiuscula, o programa sera encerrado.");
	} else {
		letraMaiuscula = letraMinuscula - 32;
		printf("A letra maiscula e %c", letraMaiuscula);
	}
	
	
	
	return 0;
}
