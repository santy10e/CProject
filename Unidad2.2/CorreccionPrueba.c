#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>

int IngresarTermino();
int generarTermino();
int GenerarSerie();
int verificarPrimo();
int nTerminos, suma, xTerminos;
int IngresarTerminox();
int Factorial();
int SignoNumero(int signo);
int generarExponente();
int a=1, b=0, fibo=0;
int main(int argc, char const *argv[])
{   
    nTerminos = IngresarTermino();
    xTerminos = IngresarTerminox();
    suma = GenerarSerie(nTerminos,1);
    printf("S = %d", suma); 
    return 0;
}
int IngresarTermino(){
    int nTerminos;
    printf("Ingresar numero de terminos: ");
    scanf("%d", &nTerminos);
    return nTerminos;
}
int IngresarTermino(){
    int nTerminos;
    printf("Ingresar un angulo > 0: ");
    scanf("%d", &nTerminos);
    return nTerminos;
}
int Factorial(int numero){
    int rta = 1, i;
    for (i = 2; i <= numero; i++){
        rta = rta * i;
    }
    return rta;
}
int SignoNumero(int signo){
    //if (signo == 1 || signo == -1){

        signo = signo * -1;
    //printf(" signo%d ", signo);
    return signo;
}
int generarExponente(int nTerminos){
        //serie fibonacci para division 
        fibo = a + b;
        a = b;
        b = fibo;    
    return fibo;
}
    int GenerarSerie(int nTerminos, int signo){
    int suma=0, i, termino=2, fact, ex=-1, cont = -1;
    //generar numero y div
    for( i = 1; i <= nTerminos; i++){
        cont++;
        termino = generarTermino(termino);
        ex = generarExponente(ex);
        if(cont == 2){
            signo = SignoNumero(signo);
            cont = 0;
        }
        if(signo == 1){
            printf("+");
        }
        printf("%d!/%d^%d", termino * signo, ex, i);
        termino++;
        fact = Factorial(termino);
        suma = suma + fact;
    }
    return suma;
}