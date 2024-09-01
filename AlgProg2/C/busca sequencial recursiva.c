#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10

int busca_sequencial(int v[], int n, int x)
{
    if (n == -1 || v[n] == x)
        return n;
    
    else
        return busca_sequencial(v, n-1, x);


}

int main(void)
{
    int v[MAX], x, n = MAX-1;
    srand(clock_t)

    for (int i = 0; i < MAX; i++)
    {
        v[i] = rand() % 100;
        printf("%d ", v[i]);
    }
    printf("\n");

    scanf("%d", &x);

    printf("%d\n", busca_sequencial(v, n, x));

    return 0;
}