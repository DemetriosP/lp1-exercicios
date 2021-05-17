#include <stdio.h>
#include <string.h>

typedef struct{

	char placa[8];
	char marca[20];

} Carro;

typedef struct{
	
	int hora;
	int minutos;
	
} Horario;

void main(){
	
	int i;
	
	Carro car;
	Horario chegada, saida;
	
	printf("Informe a placa do carro: ");
	fgets(car.placa, sizeof(car.placa), stdin);
	
	fflush(stdin);
	
	printf("Informe a marca do carro: ");
	fgets(car.marca, sizeof(car.marca), stdin);
	
	fflush(stdin);
	
	printf("Informe a hora")
	

}
