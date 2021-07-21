
#include "lib/CartesianPlane.h"
#include <stdio.h>
#include <stdlib.h>


struct Point * ingresarPoligono(int longitud);
void presentarPoligono(int longitud, struct Point *puntos);
float perimetro(int longitud, struct Point puntos[]);

int main(int argc, char const *argv[]){
    system("@cls||clear");

    int nroPuntos;
    printf("Ingrese el numero de puntos del poligono: ");
    scanf("%d", &nroPuntos);

    //struct Point poligono(nroPuntos);
    struct Point *poligono = ingresarPoligono(nroPuntos);
    presentarPoligono(nroPuntos, poligono);
    printf("El perimetro del poligono es: %f\n", perimetro(nroPuntos, poligono));
    return 0;
}

struct Point * ingresarPoligono(int longitud){
    int tamanioMemoria = longitud * sizeof(struct Point);
    struct Point *arreglo = (struct Point *) malloc(tamanioMemoria);
    printf("Ingrese los puntos del poligono\n");
    for (int i = 0; i < longitud; i++){
        int x, y;
        printf("Punto [%d] (x,y): ", i);
        scanf("%d,%d", &x, &y);
        struct Point pointAux;
        pointAux.x = x;
        pointAux.y = y;
        arreglo[i] = pointAux;
    }
    return arreglo;
}

void presentarPoligono(int longitud, struct Point *puntos){
    printf("PUNTOS INGRESADOS EN EL PLANO CARTESIANO\n");
    for (int i = 0; i < longitud; i++){
        struct Point point = puntos[i];
        printf("[%d,  %d]\n", point.x, point.y);
    }    
}

float perimetro(int longitud, struct Point puntos[]){
        float perimetro = 0;
        for (int i = 0; i < longitud; i++){
            struct Point inicio = puntos[i];
            struct Point final;
            if (i+1 == longitud){
                final = puntos[0];
            }else{
                final = puntos[i+1];
            }
            perimetro = perimetro + distance(final,inicio);
        }
    return perimetro;
}
