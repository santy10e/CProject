#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    float valorRecoleccion, valortotal,descuentototal,tasaAlcantarillado;
    float servicioAguaPotable, porcentajeDisca, totalPorDisca, servicioAguaPotableF,valorDiscaCompr,porcentaje, totaldelservicio;
    float r1,r2,r3,r4,r5,consumoAux;
    servicioAguaPotable=2.0;
    float descuento50;
	descuento50 = 0.50;
	float descuento30;
    descuento30 = 0.30;
    float tasaAlcantarilladoPor;
	tasaAlcantarilladoPor=0.40;

	valorRecoleccion=0.50;
    float valorProcesoDatos;
	valorProcesoDatos= 0.20;
    int edad; 
    float valorDisca;
    int discapaP;
	
    printf("Ingrese el consumo de agua en m3: ");
    scanf("%f",&consumoAux);
    printf("\nIngrese si tiene beneficios de tercera edad: responda con 1 -> Si , 2-> NO\n");
    scanf("%i", &edad);
    if (edad==1){
        descuentototal=servicioAguaPotable*descuento30;
        porcentaje=descuentototal*100;
    }
    else{
        descuentototal=0;
    }
    printf("\nIngrese si tiene beneficios de Discapacidad: responda con 1 -> Si , 2-> NO\n");
    scanf("%d", &discapaP);
    if (discapaP==1){
        printf("Ingrese el porcentaje de Discapacidad: \n");
        scanf("%f", &valorDisca);
        valorDiscaCompr=valorDisca/100;
        porcentajeDisca=valorDiscaCompr*100;
    }
    if (consumoAux>=60){
        servicioAguaPotableF=(consumoAux-60)* 0.25;
        r1=servicioAguaPotableF;
        consumoAux=60;     
    }
    if (consumoAux>=40){
        servicioAguaPotableF=(consumoAux-40)* 0.20;
        r2=servicioAguaPotableF;
        consumoAux=40;       
    }
    if (consumoAux>=25){
        servicioAguaPotableF=(consumoAux-25)* 0.10;
        r3=servicioAguaPotableF;
        consumoAux=25;       
    }   
    if (consumoAux>=15){
        servicioAguaPotableF=(consumoAux-15)* 0.05;
        r4=servicioAguaPotableF;    
    } 
    if (consumoAux<15){
        servicioAguaPotableF=0;
        r5=servicioAguaPotableF;
    if(edad==1){
        descuentototal=servicioAguaPotable*descuento50;
        porcentaje=descuentototal*100-50;
    }      
    } 

    //operaciones
    totaldelservicio=r1+r2+r3+r4+r5+servicioAguaPotable;
    tasaAlcantarillado=totaldelservicio*tasaAlcantarilladoPor;
    valortotal=totaldelservicio-descuentototal+tasaAlcantarillado+valorRecoleccion-totalPorDisca+valorProcesoDatos;

    printf("\nEl valor del Servicio de Agua Potable es: %.2f dolares", totaldelservicio);
    printf("\nEl descuento Por tercera edad es: %.2f -> %.0f %%", descuentototal,porcentaje);
    printf("\nEl descuento Por discapacidad es: %.2f -> %.0f %%", valorDiscaCompr, porcentajeDisca);
    printf("\nEl valor por alcantarillado es: %.2f dolares", tasaAlcantarillado, " ctvs");
    printf("\nEl valor de recoleccion de Basura es: %.2f ctvs", valorRecoleccion);
    printf("\nEl valor por procesamiento de datos es: %.2f ctvs", valorProcesoDatos);
    printf("\nEl valor total a pagar en la Planilla de Agua es: %.2f dolares", valortotal);
    return 0;}
