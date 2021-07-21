#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct DistanciaDosP
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    struct DistanciaDosP punto1, punto2; 
    float distancia;
    system("@cls||clear");
    
    printf("====================================================\n");
    printf("PROGRAMA PARA CALCULAR LA DISTANCIA ENTRE DOS PUNTOS\n");
    printf("====================================================\n");
    printf("\n");
    printf("Ingrese las coordenadas del punto incial [Ingrese en esta forma x,y] ");
    scanf("%d , %d", &punto1.x, &punto1.y);
    getchar();

    printf("Ingrese las coordenadas del punto final  [Ingrese en esta forma x,y] ");
    scanf("%d , %d", &punto2.x, &punto2.y);
    getchar();
    
    distancia = sqrtf(powf(punto2.x - punto1.x, 2) + powf(punto2.y - punto1.y, 2));

    printf("La distancia entre el Punto Inicial(%d,%d) y Punto Final(%d,%d) es = %f", punto1.x, punto1.y, punto2.x, punto2.y, distancia);
    
    printf("\n \nResultados de la forma Matematica");
    printf("\n(%d,%d)(%d,%d) =%f\n\n", punto1.x, punto1.y, punto2.x, punto2.y, distancia);
    
    printf("Presiona ENTER para salir");
    getchar();
    
    return 0; 
}
