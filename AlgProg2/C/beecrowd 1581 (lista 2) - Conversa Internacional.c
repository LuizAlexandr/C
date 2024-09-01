#include <stdio.h>
#include <string.h>
#define max_palavra 21

int main(void) {
    int n, k, i, j, eh_igual;
    char str1[max_palavra], str2[max_palavra];

    scanf("%d", &n);

    i = 0;
    while (i < n) {
        scanf("%d", &k);
        scanf("%s", str1);

        j = 0;
        eh_igual = 1; //Inicia assumindo que a proxima palavra será igual à primeira palavra lida
        while (j < (k - 1)) {
            scanf("%s", str2);

            if (strcmp(str1, str2)) {
                eh_igual = 0;
                }

            j++;
            }

        if (eh_igual) {
            printf("%s\n", str1);

        } else {
            printf("ingles\n");
            }

        i++;
        }

    return 0;
    }
