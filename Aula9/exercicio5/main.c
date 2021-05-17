#include <stdio.h>
#include <string.h>

#define TAM 10

void main(){
	
	char str1[TAM], str2[TAM];
	int i, j, contem= 0;
	
	printf("Informe a primeira palavra de ate 9 letras: ");
	fgets(str1, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe a segunda palavra de ate 9 letras: ");
	fgets(str2, TAM, stdin);
	
	for(j = 0; j < strlen(str1); j++){
		if(str2[i] == str1[j]){
			i++;
			contem++;
		}
	}
	
	if(contem == strlen(str2)) printf("Contem");
	
}
