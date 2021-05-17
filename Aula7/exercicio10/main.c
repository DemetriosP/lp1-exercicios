#include <stdio.h>

#define TAM 10

void main(){
	
	int i, contador;
	char letras[TAM], letra;
	
	for(i = 0; i < TAM;i++){
		printf("Informe uma letra: ");
		scanf("%c", &letra);
		
		if(letra != 'a' || letra != 'e' || letra != 'i' || letra != 'o' || letra != 'u'){
			letras[i] = letra;
			contador++;
		}
	
	}
	
	for(i = 0;i < contador;i++){
		printf("%c", letras[i]);
	}
	
}
