#include <stdio.h>

int main(void) {
    int X[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);

        if (X[i] < 1) {
            X[i] = 1;
            printf("X[%d] = 1\n", i);

            } else {
                printf("X[%d] = %d\n", i, X[i]);
                }
        }

    return 0;
    }
