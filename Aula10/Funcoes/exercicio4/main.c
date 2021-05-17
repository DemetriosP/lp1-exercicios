#include <stdio.h>
#include "funcoes.h"

void main(){

    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("A soma de todos os numeros ate o numero informado e %d", soma(num));
}