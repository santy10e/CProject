#include<stdlib.h>
#include<math.h>
#include<iostream>
using namespace std;

class point{
private:
    int x;
    int y;
public:
    point(int valueX = 0, int valueY = 0){
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

    float distance(point finalPoint){
        float distance = sqrt(pow(finalPoint.y -y,2) +  pow(finalPoint.x - x,2));
        return distance;
    }

    //PEndiente
    float slope(point finalPoint){
        float m = (finalPoint.y -y) / (finalPoint.x - x);
        return m;
    }
    //~point();
};
point ingresarPunto(string mensaje);
int main(int argc, char const *argv[])
{
    system("@cls||claer");
    point A = ingresarPunto("A");
    point B = ingresarPunto("B");
    //A = point(3, 4);
    //B.setX(15);
    //B.setY(7);

    cout << "DISTANCIA A" <<A.toString() << " --> " << " B " << B.toString() << " = " <<A.distance(B) << endl;
    cout << "DISTANCIA B" <<B.toString() << " --> " << " A " << A.toString() << " = " <<B.distance(A) << endl;
    A.distance(B);
    B.distance(A);
    return 0;
}

point ingresarPunto(string mensaje){
    int x, y;
    cout << "INGRESAR EL PUNTO  " << mensaje << endl;
    cout << "COORDENADAS (x, y) " << endl;
    cin >> x >> y;
    point Point = point(x,y); 
    return Point;
}

// CALCULAR PERIMETRO DE UN TRIANGULO PERO FIJADO EN SISTEMA DE COORDENADAS
//CARTESIANAS
