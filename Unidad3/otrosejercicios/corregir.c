#include<stdlib.h>
#include<stdio.h>
int factorial (int numero);
int main(){
	int resultado, numero = 0;
	printf("Leer numero:");
	scanf("%d", &numero);
    //printf("\nprueba\n", numero);
	resultado = factorial(numero);
	printf("%d! = %d", resultado);

}
int factorial(int numero){
          printf("-----\nprueba\n", numero);  
    if (numero <= 1){
        return 1;
    }
    else{
	 int resultado = factorial(numero -1);
        return (numero * resultado);
    }

}

