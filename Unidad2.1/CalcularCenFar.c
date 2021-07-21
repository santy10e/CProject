#include<stdlib.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    system("@cls || clear");
    int opcion, grados,gradofinal;
    float punto_conge = 32,punto_fusi = 1.8;

    printf("Desea Realizar la operacion de conversion\n");
    printf("====================================================\n");
    printf("Escribir 1 para convertir de Farenheit a Centigrados\n");
    printf("Escribir 2 para convertir de Centigrados a Farenheit\n");
    scanf ("%d", &opcion);

    if (opcion<=0 | opcion >=3){
        printf("\nOpcion ingresada invalida");
        printf("\n");
        exit(1); 
    }
    if(opcion == 1){
        printf("\nIngrese los grados en Farenheint:");
        scanf ("%d", &grados);
        gradofinal = (grados-punto_conge)/punto_fusi;
        printf("La conversion en grados centigrados es:%d", gradofinal);
        printf("\n");
    }
    else{
        printf("\nIngrese los grados en Centigrados:");
        scanf ("%d", &grados);
        gradofinal = grados*punto_fusi + punto_conge ;
        printf("La conversion en grados Farenheint es:%d", gradofinal);
        printf("\n");
    }
      return 0;
}
