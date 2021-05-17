#include <stdio.h>
#include <string.h>

typedef struct {

	char mes[10];
	char mesAbreviado[4];
	int dias;

} Data;

void main(){
	
	int numero, dias, i;

    Data d1[12] = {{"Janeiro", "JAN", 31}, {"Fevereiro", "FEV", 28}, {"Marco", "MAR", 31}, {"Abril", "ABR", 30}, {"Maio", "MAI", 31}, {"Junho", "JUN", 30}, {"Julho", "JUL", 31}, {"Agosto", "AGO", 31}, {"Setembro", "SET", 30}, {"Outubro", "OUT", 31}, {"Novembro", "NOV", 30}, {"Dezembro", "DEZ", 31}};

	do{
		printf("Informe um numero de 1 a 12: ");
		scanf("%d", &numero);
	}while(numero < 1 && numero > 12);
	
	
	for(i = 0; i < numero - 1; i++){
		dias += d1[i].dias;
	}
	
	printf("emora %d para chegar ao mes de %s", dias, d1[numero-1].mes);
}