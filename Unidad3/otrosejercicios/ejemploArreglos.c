#include<stdio.h>
#include<stdlib.h>
 
float promedio(int valores[], int cantidad) {
    float suma = 0.0;

    for (int i = 0; i < cantidad; ++i)
        suma += valores[i];

    return suma / (float) cantidad;
}

void presentarArreglo(int nota, int notas[10]){
    printf("Ingrese el numero de estudiantes\n");
    scanf("%d", &nota);
    for (int i = 0; i < nota; i++){
        printf(" Notas %d: ", i + 1);
        scanf("%d", &notas[i]);
    }
    
    //printf("EL PROMEDIO DEL CURSO ES: %1.f\n", promedio(notas,nota));
}
