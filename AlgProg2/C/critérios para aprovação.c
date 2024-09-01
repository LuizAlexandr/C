#include <stdio.h>

#define MAX_ALUNOS 100

float ler_media(int m) {
    int i;
    float media, nota;
    media = 0;
    for (i = 0; i < m; i++) {
        scanf("%f", &nota);
        media += nota;
    }
    media = media / m;
    return media;
}

void ler_notas_praticas(float P[MAX_ALUNOS], int n) {
    int i; /* índice da posição do vetor */
    for (i = 0; i < n; i++) {
        P[i] = ler_media(3);
    }
}

void ler_notas_teoricas(float T[MAX_ALUNOS], int n) {
    int i;
    for (i = 0; i < n; i++) {
        T[i] = ler_media(2);
    }
}

float obter_maximo(float vetor[MAX_ALUNOS], int n) {
    int i;
    float maximo = vetor[0];
    for (i = 0; i < n; i++) {
        if (maximo < vetor[i])
            maximo = vetor[i];
    }
    return maximo;
}

void multiplicar_fator(float vetor[MAX_ALUNOS], int n, float fator) {
    int i;
    for (i = 0; i < n; i++) {
        vetor[i] = vetor[i] * fator;
    }
}

float obter_media(float vetor[100], int n) {
    float media = 0;
    int i;
    for (i = 0; i < n; i++) {
        media += vetor[i];
    }
    media = media / n;

    return media;
}

void imprime_notas(float P[], float T[], int n) {
    float mediaF; //Para calcular a media final de cada aluno
    int i;
    for (i = 0; i < n; i++) {
        mediaF = (P[i] + T[i]) / 2;
        printf("%.1f\n", mediaF);
    }
}


int main() {
    int n;
    float P[MAX_ALUNOS], T[MAX_ALUNOS];
    float MaxP, MaxT, MediaP, MediaT;

    scanf("%d", &n); //Lê o número de alunos

    ler_notas_praticas(P, n);
    ler_notas_teoricas(T, n);

    multiplicar_fator(P, n, 1.1);
    MaxP = obter_maximo(P, n);

    MaxT = obter_maximo(T, n);
    multiplicar_fator(T, n, 10.0/MaxT);
    MaxT = obter_maximo(T, n);

    imprime_notas(P, T, n);

    MediaT = obter_media(T, n);
    MediaP = obter_media(P, n);

    printf("Max P: %.1f\n", MaxP);
    printf("Max T: %.1f\n", MaxT);
    printf("Media P: %.1f\n", MediaP);
    printf("Media T: %.1f\n", MediaT);

    return 0;
}
