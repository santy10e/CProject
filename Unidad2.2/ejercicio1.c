#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//S = 1^3 /1 - 2^3 / 3 + 3^3 / 6 - 4^3 / 10 + 5^3 / 15 - 6^3 / 21 +
int n_Terminos();
float sumar(int nTerminos);
void Divisor(float *serie_divisor, float *divisor);
int SignoNumero(int signo);
void presentarTermino(int signo, int termino, int serie);

int main(int argc, char const *argv[]){
    system("@cls||clear");
    int nTerminos; 
    float suma;
    printf("==============================================================================================\n");
    printf("Progrma para generar serie del cuadrado de n%cmeros con intercambio de signos incrementalmente\n",163);
    printf("==============================================================================================\n");
    nTerminos = n_Terminos();
    printf("\nS = ");
    suma = sumar(nTerminos);
    printf("\nS = %f\n", suma);    
    printf("\n");
    getchar();
    getchar();
    return 0;
}

int n_Terminos(){
    int nTerminos;
    printf("Ingresar n%cmero de t%crminos: \n",163,130);
    scanf("%d",&nTerminos);
    return nTerminos;
}

float sumar(int nTerminos){
    float termino, serie_divisor = 0, signo = -1,divisor= 0,cubo;
    float suma = 0;
    for (termino = 1; termino <= nTerminos; termino++){
        Divisor(&serie_divisor,&divisor);
        signo = SignoNumero(signo);
		presentarTermino(signo, termino, divisor);
        cubo = termino*termino*termino;
		suma = suma + (signo*(cubo/(divisor)));
    }
    return suma;
}
void Divisor(float *serie_divisor, float *divisor){
    (*serie_divisor) = (*serie_divisor) + 1;
	(*divisor) = (*divisor) + (*serie_divisor);
}

int SignoNumero(int signo){
    if (signo == -1 || signo == 1){
        signo = signo * (-1);
    printf("Signo=%d", signo);
    }
    return signo;
}

void presentarTermino(int signo, int termino, int divisor){
    if (signo > 0){
        printf(" + %d^3 / %d", termino,divisor);
    } else{
        printf(" - %d^3 / %d", termino,divisor);
    }
}


