#include <stdio.h>

int main(void) {
    int v[10], n, i;

    scanf("%d", &n);

    for (i = 0; i < 10; i++, n *= 2) {
        v[i] = n;
        printf("N[%d] = %d\n", i, v[i]);
        }

    return 0;
    }
