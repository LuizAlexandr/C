#include <stdio.h>

int main(void)
{
    int n, i, primo, divisor, eh_primo, j;

    scanf("%d", &n);

    int p[n];

    p[0] = 2;
    p[1] = 3;

    for (i = 2, primo = 5; i < n; primo+=2)
    {
        eh_primo = 1; //Inicia assumindo que é um primo

        for (divisor = 3; divisor < primo/2; divisor+=2)
        {
            if (primo % divisor == 0)
            {
                eh_primo = 0; //Não é um primo
            }
        }

        if (eh_primo)
        {
            p[i] = primo;
            i++;
        }    
    }

    for (i = 0; i < n; i++)
    {
        printf("Primo nº %d = %d\n", i, p[i]); //Imprime todos os n primeiros primos
    }

    int dif[n-1];
    for (i = 0; i < n-1; i++)
    {
        dif[i] = p[i+1] - p[i];
        printf("%d ", dif[i]); //Imprime a diferença entre os números primos como uma lista
    }
    printf("\n");

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < dif[i]; j++)
        {
            printf("#"); //Imprime a diferença entre os números primos como um gráfico de hashtags
        }
        printf("\n");
    }

    return 0;
}