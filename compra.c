#include <stdio.h>

int main(){
    int c;
    puts("Ingresa la cantidad de tu compra");
    scanf("%d", &c);

    if(c>=2000){
        int total;
        total = c -(c * 0.2);
        printf("El total a pagar es= %d", total);
    } else {
        int final;
        final = c -(c * 0.05);
        printf("El total a pagar es= %d", final);
    }

}
