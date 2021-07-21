/**
*@autor: Santiago Tene
*LIBRERIA QUE ME PERMITE TRABAJAR CON PUNTOS EN UN PLANO CARTESIANO
*/

#ifndef _CATESIAN_PLANE_H
#define _CATESIAN_PLANE_H

#include<math.h>

struct Point{
    int x;
    int y;
};

float distance(struct Point originPoint, struct Point finalPoint){
    float distance = sqrtf(powf(finalPoint.x - originPoint.x, 2) + powf(finalPoint.y - originPoint.y, 2));
    return distance;
}

//calcular la pendiente
//float slope(struct Point originPoint, struct Point finalPoint){
    //hacer de tarea la pendiente
  //  float slope = 0;
    //return slope;


#endif