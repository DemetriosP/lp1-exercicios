#include <stdio.h>
#include <string.h>

#define TAM 11

void main(){
	
	char str[TAM];
	int i, j;
	
	printf("Informe a primeira string: ");
	fgets(str, TAM, stdin);
	
	fflush(stdin);

	for(i = 0; i < sizeof(str); i++){
		
		if(str[i] == ' '){
			printf("I = %d\n", i);
			for(j = 0; j < sizeof(str); j++){
				
				if(str[j] != ' ' && str[j] != '\n'){
					printf("J = %d\n", j);
					str[i] = str[j];
					str[j] = ' ';
					break;
				}
			}
		}
	}
	
	printf("%s", str);
}
