#include <stdio.h>
#define TAM_MAX 100

int main() {
    char nome[TAM_MAX];
    double salario, total_vendas, valor_final;

    scanf("%s%*c%lf%*c%lf", nome, &salario, &total_vendas);

    valor_final = salario + (total_vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", valor_final);

    return 0;
}
