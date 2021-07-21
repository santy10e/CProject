#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(int argc, char const *argv[])
{
    system ("@cls||clear");
    int cant, total, descuento, valor1;
    int valor_llan;
    printf("ingrese la cantidad de llantas: ");
    scanf("%d", &cant);

    if (cant < 5){
        valor1 = 800;
        valor_llan = cant * valor1;
        printf("El valor por las llantas es;%d", valor_llan);
    }
     if (cant >= 5 & cant <=8){
       valor_llan = cant * 700;
       printf("El valor por las llantas es:%d", valor_llan);
    }
    if (cant >= 9 ){
        valor_llan = cant * 800;
        descuento = valor_llan * 0.30;
        total = descuento - valor_llan;
        printf("El valor por las llantas es:%d", total);
    }
    

    return 0;
}
