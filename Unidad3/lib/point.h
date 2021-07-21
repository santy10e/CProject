#ifndef POINT_H
#define POINT_H

#include<math.h>
#include<iostream>
using namespace std;

class point
{
private:
    int x;
    int y;
public:
    point(int valueX = 0, int valueY = 0)
    {
        x=valueX;
        y=valueY;
    }
  
    int getX()
    {
        return x;
    }

    void setX(int newX)
    {
        x = newX;
    }

    int getY()
    {
        return y;
    }

    void setY(int newY)
    {
        y = newY;
    }

    string toString()
    {
        return "[" + to_string(x) + ", " + to_string(y) + "]";
    }

    float distance = sqrt(pw(finalPoint.getX() - x,2) + pow(finalPoint.getY() - y,2));
    return distance;
}
};
#endif