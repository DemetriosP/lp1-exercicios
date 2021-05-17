#include <stdio.h>
#include "funcoes.h"

void main(){

    Media m;

    printf("Informe as 3 notas: ");
    scanf("%f", &m.nota1);
    scanf("%f", &m.nota2);
    scanf("%f", &m.nota3);
    printf("Informe os 3 pesos: ");
    scanf("%f", &m.peso1);
    scanf("%f", &m.peso2);
    scanf("%f", &m.peso3);

    printf("A media do aluno e %f", calcularMedia(m));
}
