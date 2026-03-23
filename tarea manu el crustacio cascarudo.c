#include <stdio.h>

int main()
{
    int sinQ, conQ, papas, refrescos;
    int impSinQ, impConQ, impPapas, impRefrescos;
    int total;

    //Menu
    printf("El Crustaceo Cascarudo - HECTOR CASTRO RIOS\n");
    printf("1) Hamburguesa sin queso    $58\n");
    printf("2) Hamburguesa con queso    $65\n");
    printf("3) Papas                    $45\n");
    printf("4) Refrescos                $40\n\n");

    //entrada de datos
    printf("Cantidad de hamburguesas sin queso: ");
    scanf("%d", &sinQ);

    printf("Cantidad de hamburguesas con queso: ");
    scanf("%d", &conQ);

    printf("Cantidad de papas: ");
    scanf("%d", &papas);

    printf("Cantidad de refrescos: ");
    scanf("%d", &refrescos);

    //proceso
    impSinQ      = sinQ * 58;
    impConQ      = conQ * 65;
    impPapas     = papas * 45;
    impRefrescos = refrescos * 40;

    total = impSinQ + impConQ + impPapas + impRefrescos;

    //salida de datos
    printf("\nCantidad      Descripcion              Importe\n");
    printf("%-12d %-26s $%d\n", sinQ, "Hamburguesa sin queso", impSinQ);
    printf("%-12d %-26s $%d\n", conQ, "Hamburguesa con queso", impConQ);
    printf("%-12d %-26s $%d\n", papas, "Papas", impPapas);
    printf("%-12d %-26s $%d\n", refrescos, "Refrescos", impRefrescos);

    printf("______________________________________________\n");
    printf("Total                                $%d\n", total);

    return 0;
}