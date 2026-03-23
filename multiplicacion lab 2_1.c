#include <stdio.h>

int main(void) {
    int n, i, r;

    printf("Ingresa un número:\n");
    scanf("%d", &n);

    i = 1;
    while (i <= 10) {
        r = n * i;
        printf("%dX%d=%d\n", n, i, r);
        i = i + 1;
    }

    printf("Bye\n");
    return 0;
}