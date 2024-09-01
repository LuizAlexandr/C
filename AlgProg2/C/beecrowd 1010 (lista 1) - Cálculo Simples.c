#include <stdio.h>

int main() {
    int n1, n2;
    float val1, val2, total;

    scanf("%*d %d %f", &n1, &val1);
    scanf("%*d %d %f", &n2, &val2);

    total = (n1 * val1) + (n2 * val2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);

    return 0;
}
