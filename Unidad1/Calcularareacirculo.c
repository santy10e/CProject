//Indique la estructura básica de un programa en C para calcular el área de un círculo indicando como resultado final//
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.1415

/*AUTORES:
Alba Nieto
Omar Maldonado
Santiago Tene */

int main(int argc, char const *argv[])
{
    float area, radio;

    printf("Introduzca el valor del radio:");
    scanf("%f", &radio);
    getchar();
    area = PI * pow(radio,2);

    printf("\nEl area del circulo es: %.2f", area);
    
    return 0;
}
