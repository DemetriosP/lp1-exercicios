#include <stdio.h>
#include <string.h>

#define TAM 10

void main(){
	
	char str1[TAM], str2[TAM];
	int tamanho;
	
	printf("Informe a primeira palavra de ate 9 letras: ");
	fgets(str1, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe a segunda palavra de ate 9 letras: ");
	fgets(str2, TAM, stdin);
	
	tamanho = strcmp(str1, str2);
	
	if(tamanho == -1) printf("A primeira palavra e menor que a segunda palavra");
	if(tamanho == 0) printf("A primeira palavra e identica a segunda palavra");
	if(tamanho == 1) printf("A primeira palavra e maior que a segunda palavra");

}