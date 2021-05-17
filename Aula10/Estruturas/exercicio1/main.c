#include <stdio.h>
#include <string.h>

typedef struct {
	
	char mes[10];
	char mesAbreviado[4];
	int dias;	
	
} Data;

void main(){
	
	Data d1[12];
	int i, j;
	
	for( i = 0; i < 12; i++){
		printf("Informe o nome do mes: ");
		fgets(d1[i].mes, sizeof(d1[i].mes), stdin);
		
		fflush(stdin);
		
		j = -1;
	    do{
	    	j++;
			if(d1[i].mes[j] == '\n') d1[i].mes[j] = '\0';
		}while(d1[i].mes[j] != '\0');
		
		printf("Informe o nome do mes abreviado: ");
		fgets(d1[i].mesAbreviado, sizeof(d1[i].mesAbreviado), stdin);
		
		fflush(stdin);
		
		printf("Informe a quantidade de dias no mes: ");
		scanf("%d", &d1[i].dias);
		
		fflush(stdin);
	}
	
	for( i = 0; i < 12; i++){
		printf("%s\n", d1[i].mes);
		printf("%s\n", d1[i].mesAbreviado);
		printf("%d\n\n", d1[i].dias);
	}
	
}
