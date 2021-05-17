#include <stdio.h>
#include "funcoes.h"

int numeroPrimo(int x){
    int i, primo = 1;

    for(i = 1; i <= x; i++){
        if(i != x && i != 1 && x % i == 0){
            primo = 0;
            break;
        }
    }

    return primo;
}
