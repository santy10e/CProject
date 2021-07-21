
//Autor: Santiago Tene
#include <iostream> 
#include <cstdlib> 
#include<ctime>
using namespace std;
using std::rand;
using std::srand;

int tirarDados(){//no me funciona con class 

    int dado1= 1+rand()%6;
    int dado2= 1+rand()%6;
    int suma=dado1+dado2;
cout<<"El jugador tiro "<<dado1<<" + "<<dado2<<" = "<<suma<<endl;
  return suma;
}
int main(){
  system("@cls||clear");
string repetir ="s";
cout << "**********************************************************"<< endl;
cout << "********   BIENVENIDO  AL  CASINO  DE  PRIMERO B  ********"<< endl;
cout << "********* RECUERDA QUE: EL  CASINO  NUNCA  PIERDE ******"<< endl;
cout << "**********************************************************"<< endl;

while (repetir == "s" || repetir == "S"){
string estado="";
int miPunto, newtotal;
srand(time(0));

int Apuestas();
int apuesta,casa = 20, total;
cout<<"Ingrese la Apuesta que quiere realizar"<<endl;
cin>>apuesta;
cout<<"Su apuesta es: "<<apuesta<<endl;
cout<<"La casa apuesta 20$" <<endl;
total = apuesta + casa;
cout<<"EL POZO TOTAL ES: "<<total<<endl;
int guarda = total;

int sumaDeDados=tirarDados();
if(sumaDeDados==7){            
estado="gano";
} else
if(sumaDeDados==miPunto){                   
estado="perdio";
}
if(estado=="gano"){
cout<<"El jugador gana"<<endl;
}else{
cout<<"El jugador pierde"<<endl;
}



if (estado=="gano"){
  cout<<"Usted gana y se lleva el pozo de: "<<total<<endl;
  newtotal = 0;
}else{
  cout<<"Usted pierde y gana la casa"<<endl;

  newtotal = guarda + total;
  cout<<"El pozo acumulado es: "<<newtotal<<endl;
  }

cout<<"Quieres Volver a Jugar Presiona (s) para continuar o (n) para salir" <<endl;
cin>>repetir;
while (repetir == "n" || repetir == "N"){
cout<<"Gracias por jugar"<<endl;
break;
}
}
}





