#include <stdio.h>
#include <string.h>

#define TAM 11

void main(){
	
	char str[TAM], atual, novo;
	int i, x;
	
	printf("Informe uma string de ate 10 letras: ");
	fgets(str, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe uma letra presente na string informada: ");
	scanf("%c", &atual);
	
	fflush(stdin);
	
	printf("Informe uma letra que de preferencia nao esteja presente na string informada: ");
	scanf("%c", &novo);
	
	for(i = 0;i < strlen(str) ; i++){
		if(str[i] == atual) str[i] = novo;
	}
	
	printf("%s", str);
}