#include<iostream>
 
using namespace std;
 
const double pi=3.141516;
 
class calcular{
    double radio,area;
 
    public:
    void iniciar(void);
    void entradaDatos(void);
    void salidaDatos(void);
} calcular1;
 
int main(void){
    calcular calcular2;
    calcular1.iniciar();
    // calcular2.iniciar();
 
    calcular1.entradaDatos();
    //calcular2.entradaDatos();
 
    calcular1.salidaDatos();
    //calcular2.salidaDatos();
    return 0;
};
 
void calcular::iniciar(void) {
    cout <<"PROGRAMA QUE CALCULA EL AREA"<<"\n\n";
}
 
void calcular::entradaDatos(void) {
    cout<<"INTRODUZCA EL RADIO DE LA CIRCUNFERENCIA"<<"\n";
    cin>>radio;
 
    area=pi*radio*radio;
}
 
void calcular::salidaDatos(void) {
    cout<<"AREA =\t\t" <<area <<"\n";
}