#include <stdio.h>
#include "operaciones.h"

int main() {
    float n1, n2;
    float Suma=0;
    float Resta=0;
    float Multiplicacion=0;
    float Division=0;
    printf("Ingrese el 1er numero:");
    scanf("%f", &n1);
    printf("Ingrese el 2do numero:");
    scanf("%f", &n2);

    Suma = suma(n1,n2);
    Resta = resta(n1,n2);
    Multiplicacion = multiplicacion(n1,n2);
    Division = division(n1,n2);
    
    printf ("La suma de ambos numeros es: %f\n", Suma);
    printf ("La resta de ambos numeros es: %f\n", Resta);
    printf ("La multiplicacion de ambos numeros es: %f\n", Multiplicacion);
    printf ("La division de ambos numeros es: %f\n", Division);
    return 0;
}