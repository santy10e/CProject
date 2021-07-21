#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main ()
{
    double lado, altura;
    system ("@cls||clear");

    printf("PROGRAMA QUE PERMITE CALCULAR LA ALTURA DE UN TRIANGULO EQUILATERO\n");
    printf("Ingrese el valor de uno de los lados del triangulo equilatero:");
    scanf ("%lf", &lado);
    //printf("lado %lf", lado);
    //printf("POW %f", pow (lado, 2));
    altura = pow (lado, 2) - pow (lado / 2, 2);
    printf("La altura de un triangulo equilatero es: %f", altura);

    getchar ();
    getchar ();
}