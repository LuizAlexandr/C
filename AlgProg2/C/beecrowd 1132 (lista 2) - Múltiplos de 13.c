#include <stdio.h>

int main(void) {
    int x, y, aux;
    int soma = 0;
    scanf("%d %d", &x, &y);
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    for (int i = x; i <= y; i++) {
        if ((i % 13) != 0) {
            soma += i;
        }
    }
    printf("%d\n", soma);

    return 0;
}
