//Santiago Tene
#include<iostream>
using namespace std;

class Fraccion{
private:
    int numerador;
    int denominador;
public:
    Fraccion(int num = 1, int deno = 1){
    numerador = num;
    denominador = deno;
    }

    
    void simplificar(){
        int limite = numerador;
        if (numerador>denominador){
            limite = denominador;
        }
        int i = limite;
        do{
            if (numerador % i == 0 && denominador %i == 0){
                numerador = numerador / i;
                denominador = denominador / i;
            }
                int limite = numerador;
                if (numerador > denominador){
                    limite = denominador;
                    i = limite;
                }
                
                else{
                    i--;
                }
        } while (i>= 2);       
    }

    int getNumerador(){
        return numerador;
    }

    void setNumerador(int value){
        numerador = value;
    }

    int getDenominador(){
        return denominador;
    }

    void setDenominador(int value){
        denominador = value;
    }

    string toString(){
        return to_string(numerador) + " / " + to_string (denominador);
    }
};

int main(int argc, char const *argv[]){
    
    Fraccion f1, f2, f3, f4;
    f1 = Fraccion(2,3);
    f2 = Fraccion(1,2);
    f4 = Fraccion(2,4);

    Fraccion rta = rta0.sumar(f3);

    cout <<f1,toString() <<
}

void operarFracciones(){

}

void presentarRespuesta(){

}


