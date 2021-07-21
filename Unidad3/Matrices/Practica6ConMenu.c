//Autor: Santiago Tene Castillo
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct matriz{
    int filas;
    int columnas;
}matrix;

int numeros[100][100];

matrix ingresarLimites(){
    matrix nuevaMatriz;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &nuevaMatriz.filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &nuevaMatriz.columnas);
    return nuevaMatriz;
}

void crearMatriz(matrix vMatrix){
    for (int fila =0; fila<vMatrix.filas; fila++){
        for (int columna = 0; columna < vMatrix.columnas; columna++){
            printf("Ingrese un numero MxN [%d][%d] ", fila+1, columna+1);
            scanf("%d", &numeros[fila][columna]);
        }
    }
} 

void visualizarMatriz(matrix zMatrix){
    printf("\nPresentacion en Matriz\n");
    printf("========================\n");
    int i,j;
    for (i = 0; i < zMatrix.filas; i++){
        for (j = 0; j < zMatrix.columnas; j++){
            printf(" %d ", numeros[i][j]);
        }
            printf("\n");
    }
}

void verificarPrimo(matrix yMatrix){
    printf("\nPresentar Primos\n");
    printf("=======================\n");
    int i,j;
    for (i = 0; i < yMatrix.filas; i++){
        for (j = 0; j < yMatrix.columnas; j++){
        int primos = numeros[i][j];
        //printf("prueba%d", primos);
        int contador = 0;
        for (int pri = 1; pri <=primos; pri++){
            if (primos%pri==0){
                contador=contador+1;
            }
        }
        if (contador<=2){
            printf(" %d ", primos);
        }
        }
    }
}


int main(int argc, char const *argv[]){
    int opcion;
    do{
    system("@cls||clear");
    printf("\n==============MENU=================\n");
    printf("Recomendacion: Seguir orden del Menu\n");
    printf("====================================\n");
    printf("1. Ingresar limite de la Matriz\n");
    printf("2. Introducir la Matriz\n");
    printf("3. Visualizar la Matriz\n");
    printf("4. Visualizar los primos en la Matriz\n");
    printf("5. Salir\n");
    printf("Seleccione: ");
    scanf("%d", &opcion);

    switch (opcion){
    case 1:
        printf("\nOpcion 1\n\n");
        matrix ingresolimite = ingresarLimites();
        break;
    case 2:
        printf("\nOpcion 2\n\n");
        crearMatriz(ingresolimite);
        break;
    case 3:
        printf("\nOpcion 3\n\n");
        visualizarMatriz(ingresolimite);
        printf("\nPresione Enter Para Volver al Menu");
        getch();
        break;
    case 4:
        printf("\nOpcion 4\n\n");      
        verificarPrimo(ingresolimite);
        printf("\n\nPresione Enter Para Volver al Menu");
        getch();
        break;
    case 5:
        printf("\nGracias Por Usar Nuestro Programa\n");      
        printf("\nAutor: Santiago Tene Castillo\n");
        break;
    default:
        printf("\nSeleccione una opcion valida\n");
        break;
    }
    
}while(opcion!=5);
return 0;
}




