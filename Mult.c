#include <stdio.h>

int main() {
    int numero, i;
    puts("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Orden ascendente:\n");
    i = 0;
    do {
        int v;
        v = numero * i;
        printf("%d * %d = %d\n", numero, i, v);
        i++;
    } while (i <= 1000);

    printf("\nOrden descendente:\n");
    i = 1000;
    while (i >= 0) {
        int c;
        c = numero * i;
        printf("%d * %d = %d\n", numero, i, c);
        i--;
    }

    return 0;
}
