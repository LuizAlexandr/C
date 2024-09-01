#include <stdio.h>
#define tam 100
int main(void)
{
    double x, n[tam];

    scanf("%lf", &x);

    for (int i = 0; i < tam; i++, x/=2)
    {
        n[i] = x;
    }

    for (int i = 0; i < tam; i++)
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}