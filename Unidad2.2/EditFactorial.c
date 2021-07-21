#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int ingresarLimite();
long generarSerie(int limite);
int verificarPrimo(int numero);
long calcularFactorial(int numero);
int limite;
bool esPrimo;
int divisor (int numero);
int exponente (int numero);
    int fibo=0, a=1, b=0;
        int i, serie=0;
int main(int argc, char const *argv[]){
    system("@cls||clear");
    limite = ingresarLimite("Ingrese el limite de la serie: ");
    printf("S = ");
    long suma =  generarSerie(limite);
    printf("\nS = %ld\n", suma);
    return limite;
}

int ingresarLimite(char *mensaje){
    int limite;
    printf("%s: ", mensaje);
    scanf("%d", &limite);
    getchar();
    return limite;
}
int generarTermino(int numero){
    bool esPrimo;
    do{
        esPrimo = verificarPrimo(numero);
        if (esPrimo != 1){
            numero++;
        }
    } while (esPrimo != 1);
    return numero;
}
int verificarPrimo(int numero){
    int i = 2;
    int totalDivisores = 0;
    while ((totalDivisores == 0) && (i < numero)){
        if (numero % i == 0){
            totalDivisores = totalDivisores + 1;
            //printf("total", totalDivisores)
        }
        i++;
    }   
        return totalDivisores;
}
long calcularFactorial(int numero){
    long resultado = 1;
    for (int i = numero; i > 1; i--){
        resultado = resultado *i;
   
   //AQUI HAY UN ERROR
   
   // printf("fac%d", resultado);
    }
    return resultado;
}
int exponente (int limite){
        serie = serie+1;
       //printf("^%d + ", serie);
        return serie;
    
}
int divisor (int limite){
        fibo = a + b;
        a = b;
        b = fibo;
    //printf("fibo%d", fibo);
    return fibo;
}
long generarSerie(int limite){
    long suma = 0;
    int divisor1=-1,exponente1=2,limitando=2, fac=2;
    int totalDivisores, gen=2;
        long factorial = calcularFactorial(limitando);
    for (int i = 2; i < limite; i++){
        exponente1=exponente(exponente1);
        divisor1=divisor(divisor1);
        totalDivisores = verificarPrimo(totalDivisores);
        gen = generarTermino(gen);
        printf(" %d!/%d^%d ", gen, divisor1, exponente1);


            //int divisorFibo = divisor (limite);
            //int exponenteIncremento = exponente (limite);

            //suma = suma + factorial/pow(divisorFibo, exponenteIncremento);
        }
            return suma;
    }




