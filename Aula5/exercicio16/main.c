#include <stdio.h>

void main() {

    char letra;

    do{
        printf("Informe uma letra: ");
        scanf(" %c", &letra);

    }while(letra != 'z' && letra != 'Z');
}
