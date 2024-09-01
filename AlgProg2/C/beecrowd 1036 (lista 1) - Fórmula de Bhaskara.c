#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C, R1, R2, delta;

    scanf("%lf %lf %lf", &A, &B, &C);

    delta = pow(B,2) - (4 * A * C);

    if ((A != 0) && (delta >= 0)) {
        R1 = (-B + sqrt(delta)) / (2 * A);
        R2 = (-B - sqrt(delta)) / (2 * A);
        printf("R1 = %.5f\nR2 = %.5f\n", R1, R2);
    } else {
        printf("Impossivel calcular\n");
    }

    return 0;
}
