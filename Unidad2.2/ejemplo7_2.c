/* Programa que muestra la diferencia entre un parametro
   por valor y uno por referencia (apuntador).
   @autor Ricardo Ruiz Rodriguez
*/
#include <stdio.h>

void llamadaValor(int);
void llamadaReferencia(int *);

int main(){
   int argumento = 10;
   
   printf("Valor de argumento (main()): %d\n", argumento);
   llamadaValor(argumento); /* parametro = argumento */
   printf("\nValor de argumento (main()): %d\n", argumento);
   llamadaReferencia(&argumento); /* parametro = &argumento */
   printf("\nValor de argumento (main()): %d\n", argumento);

   return 0;
}

void llamadaValor(int parametro){
   printf("\nValor de argumento (llamadaValor()): %d\n", parametro);
   parametro *= 2;
   printf("Valor de argumento (llamadaValor()): %d\n", parametro);
}

void llamadaReferencia(int *parametro){
   printf("\nValor de argumento (llamadaReferencia()): %d\n", *parametro);
   *parametro *= 2; /* *parametro = *parametro * 2; */
   printf("Valor de argumento (llamadaReferencia()): %d\n", *parametro);
}
