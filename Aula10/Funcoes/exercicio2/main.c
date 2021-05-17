#include <stdio.h>
#include "funcoes.h"

void main(){

    float kelvin;

    printf("Informe uma temperatura em Kelvin: ");
    scanf("%f", &kelvin);

    printf("A temperatura em Fanhrenheint e %.2f", converteKelvinEmFahrenheint(kelvin));
}
