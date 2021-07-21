/**
 * @author: Heidy Garcia
 * Calcular el MCD de un numero
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int arg, char const *argv[]){
    system("@cls||clear");
    int numero1,numero2, i,residuo, MCD, a, b;

    printf("BIENVENIDO AL PROGRAMA PARA CALCULAR EL MCD DE UN NUMERO\n");
    printf("=======================================================\n");
    printf("Ingrese el numero1: ");
    scanf ("%d" , &numero1);
    printf("Ingrese el numero2: ");
    scanf ("%d", &numero2);

        if (numero1>numero2){
            a = numero1;
            b = numero2;
        }
        else
        {
            a = numero2;
            b = numero1;
        }
    do
    {
        residuo = b;
        b = a%b;
        a = residuo;
    } while (b!=0);
    
    //while (residuo != 0);
    
    printf("El maximo comun divisor es de: %d\n ", residuo);
    printf("\nGracias por verificar en este programa\n");
    printf("\nPresione culaquier tecla para salir");

    return 0;
}