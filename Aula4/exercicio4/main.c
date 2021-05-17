#include <stdio.h>
#include <conio.h>

int main() {
    
    char letraMinuscula, letraMaiuscula;
    
    printf("Entre com uma letra maiuscula: ");
    scanf("%c", &letraMaiuscula);
    
    if(letraMaiuscula >= 65 && letraMaiuscula <= 90) {
        letraMinuscula = letraMaiuscula + 32;
        printf("A letra minuscula e %c", letraMinuscula);
    } else {
        printf("Voce nao digitou uma letra maiuscula, o programa sera encerrado.");
    }
    
    return 0;
}
