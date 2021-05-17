#include <stdio.h>
#include "funcoes.h"

float calcularMedia(Media m){

    return ((m.nota1 * m.peso1) + (m.nota2 * m.peso2) + (m.nota3 * m.peso3)) / 3;
}
