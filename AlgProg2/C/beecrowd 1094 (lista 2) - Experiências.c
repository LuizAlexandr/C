#include <stdio.h>

int main(void) {
    int n, qnt, tot;
    int v[3] = {0, 0, 0};
    char tp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d %c", &qnt, &tp);
        if (tp == 'C') {
            v[0] += qnt;
        } else if (tp == 'R') {
            v[1] += qnt;
        } else {
            v[2] += qnt;
        }
    }
    tot = v[0] + v[1] + v[2];
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n", tot, v[0], v[1], v[2], ((double)v[0]*100)/tot, ((double)v[1]*100)/tot, ((double)v[2]*100)/tot);

    return 0;
}
