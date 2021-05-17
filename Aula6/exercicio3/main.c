#include <stdio.h>

void main() {
	
	char limite = 'z', i, letra = 'a';
	
	while(letra >= 'a' && letra <= 'z'){
		printf("Informe um letra minuscula de a ate z: ");
		scanf(" %c", &letra);
		
		if(letra >= 'a' && letra <= 'z'){
			for(i = letra;i <= limite; i++){
			printf("%c\n", i);
			}
		}
		
	}

}

