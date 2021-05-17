#include <stdio.h>
#include <conio.h>

int main() {
    
    char caracter, anterior, sucessor;
    
    printf("Entre com um caracter: ");
    scanf("%c", &caracter);
    
    anterior = caracter - 1;
    sucessor = caracter + 1;
    
    printf("O caracter anterior e %c e o caracter sucessor e %c", anterior, sucessor);
    
}
