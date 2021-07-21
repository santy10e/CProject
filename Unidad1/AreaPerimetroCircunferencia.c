#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1416

int main(int argc, char const *argv[]){
    float diametro;
    float area=0, perimetro = 0;
    //const float PI = 3.1416;

    system ("@cls||clear");

    printf("INgresar por favor el diametro de la circunferencia (cm):");
    scanf("%f", &diametro);

    getchar();

    area = PI pow (diametro/2) pow (diametro/2);
    perimetro = PI pow diametro;

    printf("El area de la circunferencia es: %f cm^2\n", area);
    printf("El diametro de la circunferencia es: %f cm\n", diametro);
    printf("Presione ENTER para terminar");
    getchar();
    //system("pause");
    return 0;

}