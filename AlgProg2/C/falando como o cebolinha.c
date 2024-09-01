#include <stdio.h>
#include <string.h>

#define MAX_PALAVRA 20

int comprimento_str(char string[]) {
    int comprimento = 0;
    while (string[comprimento] != '\0') {
        comprimento += 1;
    }
    return comprimento;
}

void cebolificador(char palavra[], char modificada[]) {
    int i, j;
    int eh_R = 0; //Começa em Falso
    int ultima_letra = comprimento_str(palavra)-1;
    i = 0; //Primeira letra da palavra original
    j = 0; //Primeira letra da palavra modificada
    while (i <= ultima_letra) { //Enquanto i não for o índice do fim de string ('\0') da palavra original
        char letra;
        letra = palavra[i];
        if (letra == 'R') {
            if (eh_R == 0) {
                modificada[j] = 'L';
                eh_R = 1; //Vira Verdadeiro
                j++;
            }
        } else {
            modificada[j] = palavra[i];
            eh_R = 0;
            j++;
        }
    i++;
    }
    modificada[j] = '\0';
}


int main() {
    char palavra[MAX_PALAVRA];
    char modificada[MAX_PALAVRA];

    scanf("%s", palavra);
    cebolificador(palavra, modificada);

    printf("%s", modificada);

    return 0;
}
