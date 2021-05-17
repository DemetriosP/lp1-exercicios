#include <stdio.h>
#include "funcoes.h"

int soma(int num){

    int i, soma;

    for(i = 0;i < num; i++){
        soma += i;
    }

    return soma;
}
