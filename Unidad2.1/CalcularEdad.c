#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct fecha
{
    int anio, mes, dia;
};
struct edad
{
    int anio, mes, dia;
};
int main(int argc, char const *argv[])
{
    time_t timeNow = time(NULL);
    //Elvolver el tiempo en una estructura de tipo time
    struct tm *fechaActual;
    fechaActual = localtime(&timeNow);
    
    fechaActual->tm_year = fechaActual->tm_year + 1900;
    fechaActual->tm_mon = fechaActual->tm_mon + 1;

    struct fecha nacimiento, actual, edad1, fecha1; //fechanacimiento
    struct edad exacta;
    int prestamoMes, prestamoAnio;

    printf("ingrese su fecha de nacimiento: (yyyy-mm-dd)");
    scanf("%d, %d, %d", &nacimiento.anio, &nacimiento.mes, &nacimiento.dia );

    prestamoMes=0;
    prestamoMes=0;

    exacta.dia = fechaActual->tm_mday - nacimiento.dia;
    if (exacta.dia < 0){
        prestamoMes = 1;
        exacta.dia = exacta.dia + 30;
    }
    exacta.mes = (fechaActual->tm_mon - prestamoMes) - nacimiento.mes;
    if (exacta.mes < 0){
        prestamoAnio = 1;
        exacta.mes = exacta.mes + 12;
    }
    printf("Su edad es:");
    printf("%d",exacta.mes, "meses");
    
    return 0;
}
