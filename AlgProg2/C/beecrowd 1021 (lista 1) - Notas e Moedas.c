#include <stdio.h>

int main() {
    double valor;
    double val_notas_e_moedas[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int qnt_notas_e_moedas[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i = 0;

    scanf("%lf", &valor);
    valor += 0.001;

    while (i < 12) {
        while (valor >= val_notas_e_moedas[i]) {
            valor = valor - val_notas_e_moedas[i];
            qnt_notas_e_moedas[i] = qnt_notas_e_moedas[i] + 1;
        }
        i++;
    }

    for (i = 0; i < 12; i++) {
        if (i == 0) {
            printf("NOTAS:\n");
        } else if (i == 6) {
            printf("MOEDAS:\n");
        }

        if (i < 6) {
            printf("%d nota(s) de R$ %.2lf\n", qnt_notas_e_moedas[i], val_notas_e_moedas[i]);
        } else {
            printf("%d moeda(s) de R$ %.2lf\n", qnt_notas_e_moedas[i], val_notas_e_moedas[i]);
        }
    }

    return 0;
}
