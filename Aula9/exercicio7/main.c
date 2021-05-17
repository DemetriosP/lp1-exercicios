#include <stdio.h>
#include <string.h>

#define TAM 11

void main(){
	
	char str[TAM], auxiliar;
	int j, i, x;
	
	printf("Informe uma palavra de ate 10 letras: ");
	fgets(str, TAM, stdin);
	
	j = strlen(str) -1;

	x = strlen(str)/2;
	
	for(i = 0; i < x ; i++){
		auxiliar = str[i];
		str[i] = str[j];
		str[j] = auxiliar;
		j--;
		printf("%d", j);
		printf("%d", i);
	}
	
	printf("%s", str);
}
