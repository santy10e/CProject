//Autor: Santiago Tene Castillo
#include<stdio.h>
#include<stdlib.h>

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


int main(void){
    system("@cls||clear");
    printf("PROGRAMA PARA PRESENTAR MATRICES\n");
    printf("================================\n");
    matrix ingresolimite = ingresarLimites();
    crearMatriz(ingresolimite);
    visualizarMatriz(ingresolimite);
    verificarPrimo(ingresolimite);
    printf("\n\nAutor: Santiago Tene Castillo");
    return 0;
}



