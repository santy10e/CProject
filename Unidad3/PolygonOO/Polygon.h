#ifndef _POLYGON_H
#define _POLYGON_H

#include"Point.h"

class Polygon{
private:
    int numberPoints;
    Point *points;
public:
    Polygon(int nPoints = 3){
        numberPoints = nPoints;

        int tamanoMemoria = numberPoints * sizeof(Point);
        points = (Point*) malloc(tamanoMemoria);
    }

    int getNumberPoints(){
        return numberPoints;
    }

    /*set setNumberPoints(int value){
        numberPoints = value;
    }*/

    Point * getPoints(){
        return points;
    }

    float perimeter(){
        float perimeter = 0;
        for (int i = 0; i < numberPoints; i++){
            Point source = points[i];
        
        Point target = (i +1) == numberPoints ? points[0] : points[i+1];
        perimeter = perimeter + source.distance(target);
        }
    return perimeter;
    }
    
    void add(int position, Point p){
        points[position] = p;
    }
   /* ~Polygon();
    free (points);
    }*/
    
};
#endif
