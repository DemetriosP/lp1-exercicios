#include <stdio.h>

void main() {
	
	int i;
	char continuar;
	
	for(i = 1; i <= 100; i++){
		printf("%d\n", i);
		
		if(i % 10 == 0 && i != 100){
			printf("precione qualquer tecla para continuar...");
			scanf("%c", &continuar);
		}
	}
}
