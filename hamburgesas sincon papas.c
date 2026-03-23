#include <stdio.h>

int main()
{
    int sinQ, conQ, papas, refrescos;
    int total;

    printf("Cantidad de hamburguesas sin queso: ");
    scanf("%d", &sinQ);

    printf("Cantidad de hamburguesas con queso: ");
    scanf("%d", &conQ);

    printf("Cantidad de papas: ");
    scanf("%d", &papas);

    printf("Cantidad de refrescos: ");
    scanf("%d", &refrescos);

    total = (sinQ * 28) + (conQ * 35) + (papas * 25) + (refrescos * 20);

    printf("Total a pagar: $%d\n", total);

    return 0;
}