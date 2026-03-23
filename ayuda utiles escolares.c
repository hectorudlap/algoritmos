#include <stdio.h>

int main() {
    int hijos;
    float sueldo, ayuda;

    printf("Ingresa el numero de hijos: ");
    scanf("%d", &hijos);

    printf("Ingresa tu sueldo: ");
    scanf("%f", &sueldo);

    if (hijos >= 3) {
        ayuda = sueldo * 0.40f;
    } else {
        if (hijos == 1 || hijos == 2) {
            ayuda = sueldo * 0.25f;
        } else {
            ayuda = 0.0f;
        }
    }

    printf("Ayuda para utiles es $%.2f\n", ayuda);

    return 0;
}