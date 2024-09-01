#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int busca_binaria(int v[], int x, int dir, int esq)
{
    int meio = (dir + esq) / 2;

    if (dir-1 == esq)
        return dir;

    else if (v[meio] >= x)
        return busca_binaria(v, x, meio, esq);
    
    else
        return busca_binaria(v, x, dir, meio);
}

int main(void)
{
    int v[MAX], esq = -1, dir = MAX, x;

    for (int i = 0; i < MAX; i++)
    {
        v[i] = (i + 1) * 2;
        printf("%d ", v[i]);
    }
    printf("\n");

    scanf("%d", &x);

    printf("%d\n", busca_binaria(v, x, dir, esq));

    return 0;
}