#include <stdio.h>
#define tam 1000

int main(void)
{
    int T, N[tam] = {0}, i, j;

    scanf("%d", &T);

    for (i = 0, j = 0; i < tam; i++, j++)
    {
        if (j == T)
        {
            j = 0;
        }
        
        N[i] = j;
    }

    for (; i > 0; i--)
    {
        printf("N[%d] = %d\n", tam-i, N[tam-i]);
    }

    return 0;
}