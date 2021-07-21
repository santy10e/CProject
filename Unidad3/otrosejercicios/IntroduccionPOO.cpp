//Calcular el volumen, area y perimetro de una caja
#include<iostream>
using namespace std;


class Caja{
private:
    int ladoLargo;
    int ladoAncho;
    int ladoProfundidad;
public:
    // Constructor
    Caja(int ancho = 2, int largo = 2, int profundidad = 2){
    cout <<"INGRESANDO EN CONSTRUCTOR"<< endl;
        ladoAncho = ancho;
        ladoLargo = largo;
        ladoProfundidad = profundidad;
    }
    ~Caja(){
            cout <<"Destruyendo Objeto"<< endl;
}
    long volumen(){
        long vol = ladoAncho * ladoLargo * ladoProfundidad;
        return vol;
    }

    long perimetroTotal(){
        return (ladoLargo * 4) + (ladoAncho * 4) + (ladoProfundidad * 4);
    }

    long areaTotal(){
        long areaMayor = (ladoLargo * ladoProfundidad) * 2;
        long areaMenor = (ladoAncho * ladoProfundidad) * 2;
        long areaIntermedia = (ladoAncho * ladoLargo) * 2;
        return areaMayor + areaMenor + areaIntermedia;
    }
    //Visualizar mi información del objeto como cadena
    string toString(){
        return "{largo: " + to_string(ladoLargo) + 
        ",ancho: " + to_string(ladoAncho) + 
        ",profundidad: " + to_string(ladoProfundidad) + 
        "}";
    }
    //getterandsetter -> 
    //get(obtener un valor de una propiedad) a
    //set(fijar el valor de una propiedad)
    int getLadoAncho(){
        return ladoAncho;
    }

    void setLadoAncho(int valor){
        ladoAncho = valor;
    }
    int getLadoLargo(){
        return ladoLargo;s
    }
    void setLadoLargo(int valor){
        ladoLargo = valor;
    }
    int getLadoProfundidad(){
        return ladoProfundidad;
    }
    void setLadoProfundidad(int valor){
        ladoProfundidad = valor;
    }
};
void presentar(Caja caja);

int main(int argc, char const *argv[]){
    Caja caja1 = Caja();
    //Caja caja2 = Caja(6, 7, 9); // Llamando a un constructor

    int largo, ancho, profundidad;
    cout <<"INGRESE EL LARGO, ANCHO Y CAJA: "<<endl;
    cin >> largo >> ancho >> profundidad;
    Caja caja2 = Caja(largo, ancho, profundidad);

    caja1.setLadoAncho(7);
     
    //cout << "OBJETO CAJA 1:" << caja1.toString() <<endl;
    //cout << "OBJETO CAJA 2:" << caja2.toString() <<endl;
    //cout << "VOLUMEN CAJA 1: " <<caja1.volumen() <<endl;
    //cout << "VOLUMEN CAJA 2: " <<caja2.volumen() <<endl;
    
    return 0;
}

void presentar(Caja caja){
    cout << "INFO OBJETO: " << caja.toString() <<endl;
    cout << "VOLUMEN CAJA: " << caja.volumen() <<endl;
    cout << "AREA TOTAL CAJA: " << caja.areaTotal() <<endl;
    cout << "PERIMETRO TOTAL CAJA: " << caja.perimetroTotal() <<endl;
}
