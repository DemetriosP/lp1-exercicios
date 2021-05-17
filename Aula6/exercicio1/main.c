#include <stdio.h>

void main() {
	
	int incremento, limite, i;
	
	do{
		printf("Informe um numero para ser o limite superior: ");
		scanf("%d", &limite);
		printf("Informe um numero para ser o incremento: ");
		scanf("%d", &incremento);
	}while(limite == 0 || incremento == 0);
	
	for(i = 0;i < limite; i = i + incremento){
		printf("%d", i);
	}
}
