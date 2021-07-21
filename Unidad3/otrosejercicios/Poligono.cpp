#include <iostream>
#include <math.h>
using namespace std;
 
class Poligono{
    private:
        int lados;
        float largo;
    public:
        Poligono();
        Poligono(int,float);
        void asignarLados(int);
        void asignarLargo(float);
        int obtenerP();
        float obtenerS();
};
 Poligono::Poligono(){
    lados = 0;
    largo = 0;
}
 
Poligono::Poligono(int px,float py){
    lados = px;
    largo = py;
}
 
void Poligono::asignarLados(int a){
    lados = a;
}
 
void Poligono::asignarLargo(float a){
    largo = a;
}
 
int Poligono::obtenerP(){
    return(lados*largo);
}
 
float Poligono::obtenerS(){
    float a,p,rad;
    const double PI = 3.1415926;
    rad = (360/(2*lados)) * (PI / 180);
    a = largo/(2*(tan(rad)));
    p = lados*largo;
    return((a*p)/2);
}

int main(){
    int lad,op=1;
    float lar;
    Poligono *poli = new Poligono;
        while (op){
            cout <<endl<< "Ingrese Lados" << endl;
            cin >> lad;
            cout <<endl<< "Ingrese Largo" << endl;
            cin >> lar;
            poli->asignarLados(lad);
            poli->asignarLargo(lar);
            cout <<endl<< "El perimetro del poligono es =  " << poli->obtenerP() << endl;
            cout <<endl<< "La superficie del poligono es = " << poli->obtenerS() << endl;
            cout <<endl<< "0 para salir, otro para repetir" << endl;
            cin >> op;
            system("clear");
            system("cls");
        }
}
        