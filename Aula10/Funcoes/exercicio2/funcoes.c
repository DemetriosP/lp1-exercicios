#include <stdio.h>
#include "funcoes.h"

float converteKelvinEmFahrenheint(float kelvin){

    float fahrenheint;

    fahrenheint = (kelvin - 273.15) * 1.8 + 32;

    return fahrenheint;
}
