#include <stdio.h>
#define tam 100

unsigned long long int fib(int n, unsigned long long int mem[])
{
    if (n == 0)
    {
        return 0;
    }
    else if (mem[n] != 0)
    {
        return mem[n];
    }
    else
    {
        mem[n] = fib(n-2, mem) + fib(n-1, mem);
        return mem[n];
    }
}

int main(void)
{
    int t, n = 0;
    unsigned long long int mem[tam] = {0};

    mem[1] = 1;

    scanf("%d", &t);

    while (scanf("%d", &n) != EOF)
    {
        printf("Fib(%d) = %llu\n", n, fib(n, mem));
    }    

    return 0;
}