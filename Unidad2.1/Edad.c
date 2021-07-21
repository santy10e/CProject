#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main(int argc, char const *argv[]){

    struct tm fechaNacimiento;
    struct tm edadExacta;
    struct tm fechaActual;

    int prestamoMes, prestamoAnio;
    printf("Ingrese su fecha de nacimiento: (yyyy-mm-dd)");
    scanf("%d-%d-%d", &fechaNacimiento.tm_year, &fechaNacimiento.tm_mon, &fechaNacimiento.tm_mday);

    //obtengo el tiempo actual de mi sistema en segundos desde 1970
    time_t timeNow = time(NULL);
    fechaActual = *localtime(&timeNow);
    fechaActual.tm_year = fechaActual.tm_year + 1900;
    fechaActual.tm_mon = fechaActual.tm_mon + 1;

    prestamoMes = 0;
    prestamoAnio = 0;

    edadExacta.tm_mday = fechaActual.tm_mday - fechaNacimiento.tm_mday;
    if(edadExacta.tm_mday < 0){
        prestamoMes = 1;
        edadExacta.tm_mday = edadExacta.tm_mday + 30;
    }

    edadExacta.tm_mon = (fechaActual.tm_mon - prestamoMes) - fechaNacimiento.tm_mon;
    if (edadExacta.tm_mon < 0){
        prestamoAnio = 1;
        edadExacta.tm_mon = edadExacta.tm_mon + 12;
    }
    edadExacta.tm_year = (fechaActual.tm_year - prestamoAnio) - fechaNacimiento.tm_year;
    if (edadExacta.tm_year >=0){
        printf("Su edad es: %d anio(s), %d mes(es), %d dia(s)\n", edadExacta.tm_year, edadExacta.tm_mon, edadExacta.tm_mday);
    }else{    
        printf("Ud. no ha nacido, esta en proyecto\n");
    }
        printf("Hasta la fecha de hoy %d-%d-%d \n", fechaActual.tm_year, fechaActual.tm_mon, fechaActual.tm_mday);
      
    return 0;
}
