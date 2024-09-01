#include <stdio.h>

int main(void) {
    int a, n, i;
    int soma = 0;

    scanf("%d %d", &a, &n);

    while (n <= 0) {
        scanf("%d", &n);
        }

    i = 0;
    while (i < n) {
        soma += a + i;
        i++;
        }

    printf("%d\n", soma);

    return 0;
    }
