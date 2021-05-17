#include <stdio.h>

void main(){

	int tempo, semaforosIguais, tempoPrimeiroSemaforo, tempoSegundoSemaforo;
	char primeiroSemaforo, segundoSemaforo;

	primeiroSemaforo = 'V';
	segundoSemaforo = 'V';
	tempoPrimeiroSemaforo = 10;
	tempoSegundoSemaforo = 48;

	for(tempo = 0; tempo <= 1000; tempo++){

		if(tempoPrimeiroSemaforo == tempo) {
			if(segundoSemaforo == 'M')primeiroSemaforo = 'V';
			else primeiroSemaforo = 'M';
			tempoPrimeiroSemaforo = tempoPrimeiroSemaforo + 10;
		}

		if(tempoSegundoSemaforo == tempo) {
			if(segundoSemaforo == 'M') segundoSemaforo = 'V';
			else segundoSemaforo = 'M';
			tempoSegundoSemaforo = tempoSegundoSemaforo + 48;
		}

		if(primeiroSemaforo == segundoSemaforo) semaforosIguais++;
	}

	printf("Os semaforos estavam no mesmo estado %d vezes", semaforosIguais);
}
