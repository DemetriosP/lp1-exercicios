#include <stdio.h>
#include <string.h>

#define TAM 11

void main(){
	
	char str[TAM], letra;
	int num1, num2, i;
	
	printf("Informe uma palavra de ate 10 letras: ");
	fgets(str, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe uma letra: ");
	scanf("%c", &letra);
	
	fflush(stdin);
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	
	for(i = num2; i < num1 + num2; i++){
		str[i] = letra;
	}
	
	printf("%s", str);
}
