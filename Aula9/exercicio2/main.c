#include <stdio.h>
#include <string.h>

int main(){
	
	char str[10], caracter;
	int i, tem = 1;
	
	printf("Informe uma string: ");
	fgets(str, 10, stdin);
	
	fflush(stdin);
	
	printf("Informe um caracter: ");
	scanf("%c", &caracter);
	
	for(i = 0;i < strlen(str); i++){
	
		if(caracter == str[i]) {
			printf("O caracter %c esta na prosicao %d", caracter, i);
			return 0;
		}
		
	}
	
	printf("O caracter informado nao existe na string");
	
	return 0;
}