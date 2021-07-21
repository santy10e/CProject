#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum colores
{
    BLANCO,
    VERDE,
    AMARILLO,
    AZUL,
    ROJO
};
int main(int argc, char const *argv[])
{
    system("@cls||clear");
    double valorCompra, valorDscto, pagoTotal;
    int descuento;
    enum colores colorbolita;
    printf("Ingrese el valor de la compra: ");
    scanf("%lf", &valorCompra);
    getchar();
    //sorteo de bolita
    srand(time(NULL));        //mezcla del anforma
    colorbolita = rand() % 5; // escoger un numero random

    /*printf("Color Blanco =%d\n",BLANCO);
    printf("Color Verde =%d\n", VERDE);
    printf("Color Amarillo =%d\n",AMARILLO);
    printf("Color Azul =%d\n", AZUL);
    printf("Color Rojo=%d\n", ROJO);*/

    printf("FELICIDADES OBTUVO LA BOLITA DE COLOR: ");
    switch (colorbolita)
    {
    case VERDE:
    {
        printf("VERDE\n");
        descuento = 10;
        break;
    }
    case AMARILLO:
    {
        printf("AMARILLO\n");
        descuento = 25;
        break;
    }
    case AZUL:
    {
        printf("AZUL\n");
        descuento = 50;
        break;
    }
    case ROJO:
    {
        printf("ROJO\n");
        descuento = 100;
        break;
    }
    default:
        printf("BLANCA\n");
        descuento = 0;
        break;
    }
    valorDscto = valorCompra * ((float)descuento / 100);
    pagoTotal = valorCompra - valorDscto;
    printf("VALOR DESCUENTO(%d %%)---->\t %lf\n", descuento, valorDscto);
    printf("TOTAL A PAGAR---->\t\t %lf\n", pagoTotal);

    printf("!!!! G R A C I A S    P O R    U S A R     E L    P R O G R A M A !!!!! ");
    return 0;
}
