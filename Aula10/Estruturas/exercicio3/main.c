#include <stdio.h>
#include <string.h>

typedef struct {

	char mes[10];
	char mesAbreviado[4];
	int dias;

} Data;

void main(){
	
	int dias, i, posicao = -1;
	char mes[10];

    Data d1[12] = {{"Janeiro", "JAN", 31}, {"Fevereiro", "FEV", 28}, {"Marco", "MAR", 31}, {"Abril", "ABR", 30}, {"Maio", "MAI", 31}, {"Junho", "JUN", 30}, {"Julho", "JUL", 31}, {"Agosto", "AGO", 31}, {"Setembro", "SET", 30}, {"Outubro", "OUT", 31}, {"Novembro", "NOV", 30}, {"Dezembro", "DEZ", 31}};

	do{
		printf("Informe o nome do mes ou o seu nome abreviado: ");
		fgets(mes, sizeof(mes), stdin);
		
		fflush(stdin);
		
		i = -1;
		
	    do{
	    	i++;
			if(mes[i] == '\n') mes[i] = '\0';
		}while(mes[i] != '\0');
		
		if(strlen(mes) == 3){
			for(i = 0; i < 12; i++){
				if(strcmp(d1[i].mesAbreviado, mes) == 0) posicao = i;
			}
		} else {
			for(i = 0; i < 12; i++){
				if(strcmp(d1[i].mes, mes) == 0) posicao = i;
			}
		}
		
	}while(posicao < 0);
	
	
	for(i = 0; i < posicao; i++){
		dias += d1[i].dias;
	}
	
	printf("Demora %d dias para chegar ao mes de %s", dias, d1[posicao].mes);
}