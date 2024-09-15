#include <stdio.h>
int main(){
    int uno;
    int dos;
    int tres;
    puts("Ingresa el primer lado");
    scanf("%d", &uno);
    puts("Ingresa el segundo lado");
    scanf("%d", &dos);
    puts("Ingresa el tercer lado");
    scanf("%d", &tres);

    int suma = uno + dos;
    if(suma > tres ){
        printf("Correcto es un triangulo");
    } else {
        printf("No se forma un triángulo con los lados ingresados.\n");
    }

    
}
