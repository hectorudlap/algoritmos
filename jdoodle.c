#include <stdio.h>
#include <math.h>

// verificar si existe solucion real o es imaginaria
void raices(float a, float b, float c){
    float x1, x2;
    if (b*b - 4*a*c < 0)
        printf("Solucion imaginaria");
    else {
        x1 = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        x2 = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        printf("Raices: %f y %f\n", x1, x2);
    }
}

int main(){
    float a, b, c;
    printf("Ingresa los 3 coeficientes a b y c: ");
    scanf("%f %f %f", &a, &b, &c);
    raices(a, b, c);
    return 0;
}