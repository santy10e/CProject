//autores: heidy García, Bryan Angamarca, Santiago Tene
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int pago_horas_normal, pago1, pago2, pagototal, horas_ex;
    int horas;
    printf("Programa para calcular la planilla a pagar para un trabajador por sus horas de trabajo\n");
    printf("======================================================================================\n");
    printf("Escribir las horas trabajadas: ");
    scanf ("%d", &horas);

    if (horas > 40){
        horas_ex = horas - 40;
        pago1 = 40*16;
        pago2 = horas_ex * 5;
        pagototal = pago2 + pago1;
        printf("Las horas trabajadas son: %d", horas);
        printf("\nLas horas EXTRAS trabajadas son: %d", horas_ex);
        printf("\nY el pago es: %d ", pagototal);
   }
   if (horas <=40){
       pago_horas_normal = horas *16;
       horas_ex = 0;
       printf("Las horas trabajadas son: %d", horas);
       printf("\nLas horas EXTRAS trabajadas son: %d", horas_ex); 
       printf("\nY el pago es: %d", pago_horas_normal);
   }
   
    
    return 0;
}
