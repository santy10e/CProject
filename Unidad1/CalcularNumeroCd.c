/*
Programa para poder calcular el numero de Cd`s necesarios
para guardar información en Gigabytes
*/

#include<stdio.h>
#include<stdlib.h>

void main(){

    float megabytes, gigabytes_cd, numero_de_cd, un_cd = 700;
    system ("@cls||clear");

    printf("PROGRAMA PARA CALCULAR NUMERO DE CD`S NECESARIOS PARA RESPALDAR INFORMACION EN GIGABYTES\n");
    printf("=========================================================================================\n");
    printf("\n Ingrese la cantidad en GIGABYTES de la informacion que desea respaldar:");
    scanf ("%f", &gigabytes_cd);

    megabytes = gigabytes_cd * 1024;
    numero_de_cd = megabytes / un_cd + 1;

    printf(" La cantidad en megabytes es: %.0f", megabytes);
    printf("\n La cantidad de Cd`s necesario es %.0f:", numero_de_cd);

getchar ();
}