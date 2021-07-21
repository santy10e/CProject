/**
 * @autor: Santiago Tene, Heidy Garcia, Bryan Angamarca
 * Programa para calcular el costo de una llamda internacional
 */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
enum CONTINENTES {
    AMERICADELNORTE = 12,
    AMERICACENTRAL = 15,
    AMERICADELSUR = 18,
    EUROPA = 19,
    ASIA = 23,
    AFRICA = 25,
    OCEANIA = 29,
    OTROS = 31,

};

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    
    float preciominuto, pagoTotal, tiempollamada;

    enum CONTINENTES ZonaGeografica;

    printf("===============================================================\n");
    printf("= PROGRAMA PARA CALCULAR EL COSTO DE UNA LLAMDA INTERNACIONAL =\n");
    printf("===============================================================\n");
    printf("Ingrese la zona horaria a la cual realiz%c la llamada: ", 162 );
    scanf("%d", &ZonaGeografica);
    printf("Ingrese el tiempo que dur%c la llamada ", 162 );
    scanf("%f", &tiempollamada);
    
    getchar();

    
    switch (ZonaGeografica)
    {
    case AMERICADELNORTE:
        printf("America del Norte\n");
        preciominuto = 2.1;
        break;
    case AMERICACENTRAL:
        printf("America Central\n");
        preciominuto = 1.9;
        break;
    case AMERICADELSUR:
        printf("America del Sur\n");
        preciominuto = 1.5;
        break;
    case EUROPA:
        printf("Europa\n");
        preciominuto = 3;
        break;
    case ASIA:
        printf("Asia\n");
        preciominuto = 3.5;
        break;
    case AFRICA:
        printf("Africa\n");
        preciominuto = 3.3;
        break;
    case OCEANIA:
        printf("Oceania\n");
        preciominuto = 3.8;
        break;
    case OTROS:
        printf("Otros\n");
        preciominuto = 4;
        break;
    default:
        printf("C%cdigo Iv%clido\n", 162,160);
        break;
    }

    pagoTotal = preciominuto * tiempollamada;
    printf("El pago que debe realizar es: %.2f $", pagoTotal);

    return 0;
}
