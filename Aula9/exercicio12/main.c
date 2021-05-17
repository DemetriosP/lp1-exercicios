#include <stdio.h>
#include <string.h>

#define TAM 11

void main(){
	
	char str[TAM];
	int i, espacoBranco;
	
	espacoBranco = 1;
	
	printf("Informe a primeira string: ");
	fgets(str, TAM, stdin);
	
	for(i = 0; i < strlen(str); i++){
		
		if(str[i] != ' ' && str[i] != '\n'){
			printf("O primeiro caracter diferente de um espaco em branco esta na posicao %d", i);
			espacoBranco = 0;
			break;
		}
	
	}
	
	if(espacoBranco == 1) printf("A string nao possui caracteres");

}
