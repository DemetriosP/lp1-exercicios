#include <stdio.h>
#include <string.h>

#define TAM 11

void main(){
	
	char str1[TAM], str2[TAM];
	
	printf("Informe a primeira string: ");
	fgets(str1, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe a segunda string: ");
	fgets(str2, TAM, stdin);
	
	fflush(stdin);
	
	strncpy(str2, str1, sizeof(str2));
	
	printf("%s", str2);
}

