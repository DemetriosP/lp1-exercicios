#include <stdio.h>
#include <conio.h>

int main() {
	
	char letraMinuscula, letraMaiuscula;
	
	printf("Entre com uma letra minuscula: ");
	scanf("%c", &letraMinuscula);
	
	letraMaiuscula = letraMinuscula - 32;
	
	printf("A letra maiscula e %c", letraMaiuscula);
	
	return 0;
}
