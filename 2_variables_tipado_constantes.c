#include<stdio.h>

int main(){

    /*%d y %i son para enteros
     * %f para flotantes
     *
     *
     */

    int edad = 20;
    edad = 99;
    float peso = 70.223;
    double pi = 3.14159265359;
    char inicial1 = 'J', inicial2 = 'O', inicial3 = 'A', inicial4 = 'N';

    printf("Mi edad es: %d\n", edad);
    printf("Mi peso es: %.1f\n", peso);
    printf("El valor de PI es: %f\n", pi);
    printf("Soy %c%c%c%c\n", inicial1, inicial2, inicial3, inicial4);


    return 0;
}
