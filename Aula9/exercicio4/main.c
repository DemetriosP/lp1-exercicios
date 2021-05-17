#include <stdio.h>
#include <string.h>

#define TAM 10

void main(){
	
	char str1[TAM], str2[TAM];
	
	printf("Informe a primeira palavra de ate 9 letras: ");
	fgets(str1, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe a segunda palavra de ate 9 letras: ");
	fgets(str2, TAM, stdin);
	
	if(strlen(str1) < strlen(str2)) printf("A primeira palavra e menor que a segunda palavra");
	if(strlen(str1) == strlen(str2)) printf("A primeira palavra e identica a segunda palavra");
	if(strlen(str1) > strlen(str2)) printf("A primeira palavra e maior que a segunda palavra");

}