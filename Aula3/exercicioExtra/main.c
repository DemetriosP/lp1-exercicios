#include <stdio.h>

int main(){

    float nota1, nota2, media;

    printf("Entre com a nota 1: ");
    scanf("%f", &nota1);

    printf("Entre com a nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("A media do aluno e %.2f\n", media);

    if(media >= 6){
        printf("Aluno aprovado");
    } else {
        if(media >= 4) print("Aluno de recuperacao");
        else
            printf("Aluno reprovado");
    }

    return 0;
}