//Programa para calcular AreaTrianguloEquilatero//
/*
comentarios de varias lines
2 lineas
3 lineas , etc
*/

// DECLARACION E IMPORTACION DE LIBRERIAS A USAR
#include <stdio.h>
#include <stdlib.h>

//FUNCION PRINCIPAL
int main(){

    float lado=0, altura, area=0;
    system("@cls||clear");

    printf ("PROGRAMA QUE ME PERMITE CALCULAR EL AREA DE UN TRIANGULO EQUILATERO\n");
    printf ("=====================================================================\n");
    printf ("Ingrese el lado del triangulo equilatero:");
    scanf ("%f", &lado);

    printf ("Ingrese la altura del triangulo equilatero:");
    scanf ("%f", &altura);

    area = lado * altura / 2;

   // printf ("\tlado = %f", lado);
   //  printf ("\taltura = %f", altura);

    

    printf ("El area de un triangulo equilatero es: %.2f,\ncuya base es de %f,\ny altura es: %f\n", area, lado, altura);

    return 0;
}