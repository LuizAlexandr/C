#include <stdio.h>

int main(void) {
    float n1, n2, n3, n4, media, exame;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (n1*2 + n2*3 + n3*4 + n4)/10;

    printf("Media: %.1f\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        scanf("%f", &exame);
        printf("Aluno em exame.\nNota do exame: %.1f\n", exame);

        media = (media + exame)/2;

        if (media >= 5.0) {
            printf("Aluno aprovado.\nMedia final: %.1f\n", media);
        } else {
            printf("Aluno reprovado.\nMedia final: %.1f\n", media);
        }
    }

    return 0;
}
