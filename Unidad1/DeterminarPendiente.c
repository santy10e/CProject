/*
Determinar la pendiente y ángulo de inclinación en grados
 entre dos Puntos A y B que se encuentran en un plano 
 cartesiano.
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.1415

struct DeterminarPendiente
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    struct DeterminarPendiente punto1, punto2;
    float pendiente1, pendiente2;
    float pendientetotal;
    float angulo,angulogrados;
    
    system("@cls||clear");

    printf("\n==========================================================================\n");
    printf("PROGRAMA PARA CALCULAR PENDIENTE Y ANGULO EN GRADOS ENTRE DOS PUNTOS A Y B\n");
    printf("==========================================================================\n\n");

    printf("Ingrese la coordenada de A [Ingrese en forma de x,y]: ");
    scanf("%d , %d", &punto1.x, &punto1.y);
    
    printf("Ingrese la coordenada en B [Ingrese en forma de x,y]: ");
    scanf("%d , %d" , &punto2.x, &punto2.y);
    
    pendiente1 = (punto2.y) - (punto1.y);
    pendiente2 = (punto2.x) - (punto1.x);
    pendientetotal = (pendiente1) / (pendiente2);

    angulo = atan(pendientetotal);
    angulogrados = (angulo * 180) / PI;

    
    printf("\nRESULTADOS\n");
    printf("\nLa pendiente de la recta en el punto A (%d,%d) y el punto B (%d,%d) es: %.2f ", punto1.x, punto1.y, punto2.x, punto2.y, pendientetotal); 
    printf("\nEl angulo de inclinacion en grados entre el punto A (%d,%d) y el punto B (%d,%d) es: %.0f ", punto1.x, punto1.y, punto2.x, punto2.y, angulogrados);
    printf("\n==========================================================================");
    printf("\n\nPresione ENTER para salir");
    getchar();
    getchar();

    return 0;
}
