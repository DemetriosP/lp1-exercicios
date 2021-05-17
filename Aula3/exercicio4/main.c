#include <stdio.h>

int main() {

    float prova1, trabalho1, prova2, trabalho2, media1, media2, mediaFinal;

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &prova1);
    printf("Informe a nota do primeiro trabalho: ");
    scanf("%f", &trabalho1);
    printf("Informe a nota da segunda prova: ");
    scanf("%f", &prova2);
    printf("Informe a nota do segundo trabalho: ");
    scanf("%f", &trabalho2);

    media1 = prova1 * 0.6 + trabalho1 * 0.4;
    media2 = prova2 * 0.7 + trabalho2 * 0.3;
    mediaFinal = (media1 + media2) / 2;

    if(mediaFinal >= 6.0){
        printf("Aluno aprovado");
    } else if(mediaFinal < 4.0) printf("Aluno reprovado");
    else printf("Aluno de recuperacao");

    return 0;

}