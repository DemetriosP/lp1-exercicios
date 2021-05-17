#include <stdio.h>

void main(){

    int totalCombincacoes, contador1, contador2, contador3, conta, numero;
    float representado, probabilidade;

    contador1 = 1;
    contador2 = 1;
    contador3 = 1;
    representado = 0;

    do{
        printf("Informe um numero de 3 a 18: ");
        scanf("%d", &numero);
    }while (numero < 3 || numero > 18);


    for(totalCombincacoes = 0; totalCombincacoes < 216 ; totalCombincacoes++){

        conta = contador1 + contador2 + contador3;

        if(conta == numero){
            representado++;
        }

        contador3++;

        if(contador3 > 6) {
            contador3 = 1;
            contador2++;
        }

        if(contador2 > 6) {
            contador2 = 1;
            contador1++;
        }

    }

    probabilidade = (representado/216) * 100;

    printf("O numero %d pode ser representado %.0f vez(es) com 3 dados, a probabilidade de ele ser sorteado com 3 dados e %.2f por cento.", numero, representado, probabilidade);
}
