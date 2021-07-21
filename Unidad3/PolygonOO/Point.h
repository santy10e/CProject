#ifndef _POINT_H
#define _POINT_H

#include<math.h>
#include<iostream>
using namespace std;

class Point{
private:
    int x;
    int y;
public:
    Point(int valueX = 0, int valueY = 0){
        x = valueX;
        y = valueY;
    }
    int getX(){
        return x;
    }

    void setX(int value){
        x = value;
    }
    int getY(){
        return y;
    }

    void setY(int value){
        y = value;
    }

    string toString(){
        return "[" + to_string(x) + ", " + to_string(y) + "]";
    }

    float distance(Point finalPoint){
        float distance = sqrt(pow(finalPoint.y -y,2) +  pow(finalPoint.x - x,2));
        return distance;
    }

    //PEndiente
    float slope(Point finalPoint){
        float m = (finalPoint.y -y) / (finalPoint.x - x);
        return m;
    }
    //~point();
};
#endif