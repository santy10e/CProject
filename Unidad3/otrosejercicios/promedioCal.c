#include<stdio.h>
#include<stdlib.h>
float * ingresarNotasReturnArray(char *etiqueta, int longitud);
void ingresarNotas(char *etiqueta, int longitud, float arreglo[]);
//float presentarResumen(char *etiqueta, int longitud, float arreglo(longitud));
float sumasNotas(int longitud, float *arreglo);
float promedioNotas(int longitud, float arreglo[]);
float presentarResumen(char *etiqueta, int longitud, float arreglo[]);
void presentarNotas(char *etiqueta, int longitud, float arreglo[longitud]);
void publicarMejorAprovechamiento(int limite, float promedios[]);

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int numeroEstudianteParalelo1, numeroEstudianteParalelo2;

    printf("Ingrese el nro de estudiantes de PRIMERO A:");
    scanf("%d", &numeroEstudianteParalelo1);
    float notasA[numeroEstudianteParalelo1];
    ingresarNotas("Primero A", numeroEstudianteParalelo1,notasA);

    printf("Ingrese el nro de estudiantes de PRIMERO B:");
    scanf("%d", &numeroEstudianteParalelo2);
    float *notasB = ingresarNotasReturnArray("PRIMERO B:", numeroEstudianteParalelo2);
    
    float promedios[2]={};

    system("@cls||clear");

    promedios[0] = presentarResumen("PRIMERO A", numeroEstudianteParalelo1, notasA);
    promedios[1] = presentarResumen("PRIMERO B", numeroEstudianteParalelo2, notasB);
    publicarMejorAprovechamiento(2, promedios);
    return 0;
}

float * ingresarNotasReturnArray(char *etiqueta, int longitud){
    int tamanioMemoria = longitud * sizeof(float);
    //float *arrayPtr; // declaración
    //arrayPtr = malloc(tamanioMemoria); // Malloc me permite reservar el tamaño de memoria credo mi arreglo que es el puntero
    float *arrayPtr = (float *)malloc(tamanioMemoria);// declaracion de ptro y reserva de memoria del mismo tiempo:
    printf("Ingreso de notas del %s \n", etiqueta);
    for (int i = 0; i < longitud; i++){
        do{
            printf("Ingreso la nota del estudiante de la lista con el nro: %i ", i+1);
            scanf("%f", &arrayPtr[i]);
            if (arrayPtr[i]<0 || arrayPtr[i]>10){
                printf("El rango de notas esta fuera de limite\n ");
            }
            
        } while (arrayPtr[i]<0 || arrayPtr[i]>10);
        printf("Gracias por ingresar las notas!\n");
    return arrayPtr;
}}

void ingresarNotas(char *etiqueta, int longitud, float arreglo[]){
    printf("Ingreso de notas del %s \n", etiqueta);
    for (int i = 0; i < longitud; i++){
        do{
            printf("Ingreso la nota del estudiante de la lista con el nro: %i ", i+1);
            scanf("%f", &arreglo[i]);
            if (arreglo[i]<0 || arreglo[i]>10){
                printf("El rango de notas esta fuera de limite\n ");
            }
            
        } while (arreglo[i]<0 || arreglo[i]>10);
        printf("Gracias por ingresar las notas!\n");
    }
    
}

void presentarNotas(char *etiqueta, int longitud, float arreglo[longitud]){
    printf("\n-----------------------------------------------------\n");
    printf("LISTADO DE NOTAS DEL %s\n", etiqueta);
    printf("Estudiante\t\tNota\n");
    printf("-------------------------------------------------------\n");
    for (int i = 0; i < longitud; i++){
        printf("Estudiante[%d]:\t\t%.2f\n", i+1, arreglo[i]);
    }
    printf("---------------------------------------------------------------\n");
}

float sumarNotas(int longitud, float*arreglo){
    float suma = 0;
    for (int i = 0; i < longitud; i++){
        suma = suma + arreglo[i];
       // suma = suma + *(arreglo+i);
        // suma += [arreglo+i];
    } 
    return suma;
}
float promedioNotas(int longitud, float arreglo[]){
    float sumaTotal = sumarNotas(longitud, arreglo);
    return sumaTotal /longitud;
}

void publicarMejorAprovechamiento(int limite, float promedios[]){
    int indiceMayor = 0;
    for (int i = 0; i < (limite-1); i++){
        if(promedios[indiceMayor] < promedios[i]){
            indiceMayor = i;
        }       
    }
    printf("El mejor aprovechamiento es de: ", promedios[indiceMayor]);
}

float presentarResumen(char *etiqueta, int longitud, float arreglo[]){
    presentarNotas(etiqueta, longitud, arreglo);
    float promedio = promedioNotas(longitud,arreglo);
    printf("PROMEDIO:\t%.2f\n", promedio);
    printf("--------------------------------------------\n");
    return promedio;
}