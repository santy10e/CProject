//Demostración de los conceptos de arreglos
#include<stdio.h>
#include<stdlib.h>
void presentarArreglo(int tamanio, int arreglo[]);
void presentarPosicion(int tamanio);
void presentarArregloPtr(int *array, int tamanio);
void ingresarArray(char *mensaje, int tamanio, int array[]);
int main(int argc, char const *argv[]){
    system("@cls||clear");


    int arreglo [] = {1,4,7,8,56,-1,7};

    printf("ARREGLO:\n");
    printf("Tamaño de memoria reservado del arreglo: %ld bytes\n", sizeof(arreglo));
    printf("Tamaño de memoria de cada elemento del arreglo: %ld bytes\n", sizeof(int));
    printf("Tamaño de memoria de cada elemento del arreglo: %d bytes\n", (int)sizeof(*arreglo));
    
    int longitudArregloCalculado = sizeof(arreglo) / sizeof(int);
    printf("Nro. de elementos disponibles ene le arreglo: %d\n", longitudArregloCalculado);
    
    presentarPosicion(longitudArregloCalculado);
    presentarArreglo(longitudArregloCalculado, arreglo);


    printf("-------> PRESENTANDO EL ARREGLO COMO PUNTERO: \n");
    presentarPosicion(longitudArregloCalculado);
    presentarArregloPtr(arreglo, longitudArregloCalculado);
    

    printf("\n\n\n*******************************************************\n");
    printf("\nEJEMEPLO DE INGRESO DE UN ARREGLO\n");
    const int LONGITUD_ARREGLO = 7;
    int arreglo2[LONGITUD_ARREGLO];
    ingresarArray("PRUEBA DE INGRESO DE ARREGLO POR EL USUARIO", LONGITUD_ARREGLO, arreglo2);   
    printf("\nEL USUARIO INGRESO EL ARREGLO:\n");
     presentarPosicion(LONGITUD_ARREGLO);
    presentarArreglo(LONGITUD_ARREGLO,arreglo2);


    return 0;
}

void presentarArreglo(int tamanio, int arreglo[]){
    printf("Val Elem: {");
for (int i = 0; i < tamanio; i++){
    printf("%d,\t ", arreglo[i]);
}
    printf("\b\b}\n");
}


void presentarArregloPtr(int *array, int tamanio){
    printf("Val Elem: {");
    for (int i = 0; i < tamanio; i++){
        printf("%d,\t ", *(array+i));
    }
    printf("\b\b}\n");
}

void ingresarArray(char *mensaje, int tamanio, int array[]){
    printf("%s\n: ", mensaje);
    for (int i = 0; i < tamanio; i++){
        printf("Ingrese [%d]: ",i);
        scanf("%d", &array[i]);
    }
    
}


void presentarPosicion(int tamanio){
    printf("Posicion: {");
for (int i = 0; i < tamanio; i++){
    printf("%d,\t ", i);
}
    printf("\b\b}\n");
}