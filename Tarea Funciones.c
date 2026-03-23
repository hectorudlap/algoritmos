#include <stdio.h>

// Declaración de los prototipos de las funciones
void serie1(int n);
void serie2(int n);
void serie3(int n);

int main()
{
    int n, opcion;

    printf("Bienvenido al programa de series\n");

    do {
        printf("\nIngresa un valor tope: ");
        scanf("%d", &n);

        printf("\n1. Serie aritmetica (1 4 7 10 13 ... )\n");
        printf("2. Serie geometrica (1 2 4 8 16 ...)\n");
        printf("3. Serie con decremento (...5 4 3 2 1)\n");
        printf("4. Salir\n");

        printf("\nQue deseas desplegar? ");
        scanf("%d", &opcion);

        switch(opcion)
        {
            case 1:
                serie1(n);
                break;
            case 2:
                serie2(n);
                break;
            case 3:
                serie3(n);
                break;
            case 4:
                printf("Gracias por usar UDLAP SW Inc.\n");
                break;
            default:
                printf("La opcion no es valida\n");
                break;
        }

    } while(opcion != 4);

    return 0;
}

void serie1(int n)
{
    int i;

    printf("Resultado Serie 1: ");
    for(i = 1; i <= n; i += 3)
    {
        printf("%d ", i);
    }
    printf("\n");
}

void serie2(int n)
{
    int i = 1;

    printf("Resultado Serie 2: ");
    while(i <= n)
    {
        printf("%d ", i);
        i *= 2;
    }
    printf("\n");
}

void serie3(int n)
{
    int i;

    printf("Resultado Serie 3: ");
    for(i = n; i >= 1; i--)
    {
        printf("%d ", i);
    }
    printf("\n");
}