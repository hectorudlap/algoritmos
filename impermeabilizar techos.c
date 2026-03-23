#include <stdio.h>

int main()
{
    float ancho, largo, area;
    float subtotal, desc, total;

    printf("Ingresa el ancho (m): ");
    scanf("%f", &ancho);

    printf("Ingresa el largo (m): ");
    scanf("%f", &largo);

    area = ancho * largo;
    subtotal = area * 120;

    if (area > 200)
    {
        desc = subtotal * 0.1;
    }
    else
    {
        desc = 0;
    }

    total = subtotal - desc;

    printf("El area es %.2f m2\n", area);
    printf("El total a pagar: $%.2f\n", total);

    return 0;
}