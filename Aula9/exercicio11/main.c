#include <stdio.h>
#include <string.h>

#define TAM 11

void main(){
	
	char str1[TAM], str2[TAM];
	int posicao, i;
	
	printf("Informe a primeira string: ");
	fgets(str1, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe a segunda string: ");
	fgets(str2, TAM, stdin);
	
	fflush(stdin);
	
	printf("Informe um posicao: ");
	scanf("%d", &posicao);

	for(i = 0; i < sizeof(str2); i++){
		str1[posicao] = str2[i];
		if(posicao < 10) posicao++;
	}
	
	printf("%s", str1);
}
