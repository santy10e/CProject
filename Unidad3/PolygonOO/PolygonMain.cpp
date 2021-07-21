#include "Polygon.h"
#include<stdlib.h>
#include<iostream>
using namespace std;

void ingresarPuntos(Polygon polygon);
void presentarPoligono(Polygon polygon);

int main(int argc, char const *argv[]){
    system("@cls||clear");

    int nroPuntos;
    printf("Ingrese el numero de puntos del poligono: ");
    scanf("%d", &nroPuntos);

    Polygon polygon = Polygon(nroPuntos);
    ingresarPuntos(polygon);
    presentarPoligono(polygon);
    cout <<"Perimetro: " <<polygon.perimeter() <<endl;
    return 0;
}

void ingresarPuntos(Polygon polygon){
    cout<<"Ingrese los puntos del poligono\n";
    for (int i = 0; i < polygon.getNumberPoints(); i++){
        int x,y;
        printf("Punto[%d] (x,y): ",i);
        scanf("%d, %d", &x, &y);
        Point pointAux = Point(x,y);
        polygon.add(i, pointAux);
    }
    
}

//Hay que revisar

void presentarPoligono(Polygon polygon){
    cout <<"PRESENTANDO PUNTOS"<<endl;
    Point *points = polygon.getPoints();
    for (int i = 0; i < polygon.getNumberPoints(); i++){
        Point puntos = points[i] ;
        cout<<"P(" <<i<< ")" <<puntos.toString() <<endl;
}
}
