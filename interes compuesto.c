#include <stdio.h>

int main() {
    float CA, r, interes;
    int n, mes;

    printf("Capital: ");
    scanf("%f", &CA);

    printf("A cuantos meses: ");
    scanf("%d", &n);

    printf("Tasa de interes: ");
    scanf("%f", &r);

    mes = 0;

    //
    while (mes <= n) {
        printf("Periodo %d $ %.2f\n", mes, CA);

        interes = CA * (r / 100.0f) / 12.0f;
        printf("Interes: %.5f\n", interes);

        CA = CA + interes;
        mes = mes + 1;
    }

    return 0;
}