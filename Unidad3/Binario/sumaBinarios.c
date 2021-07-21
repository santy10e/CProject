// Santiago Tene
#include <stdio.h>
#include <stdlib.h>
 int limite = 10;
void sumaBinarios(char result[],char numero[][limite]){

   int i, bin1, llevo = 0, bin2;
   for (i = limite; i > 0; i--){
      bin1 = numero[0][i-1];
      bin2 = numero[1][i-1];
      result[i] = bin1 ^ bin2 ^ llevo;
      llevo = (bin1 & bin2) | (bin1 & llevo) | (bin2 & llevo);
   }
   result[i] = llevo;
}
  
int lecturaBinarios(char numero[][limite]){
   int carac, i, j = 0;
   for (i = 0; i < 2; i++){
      printf ("INGRESAR EL NUMERO BINARIO A SUMAR (MAX limite NUM):\n");
      while (j < limite && (carac = getchar()) != EOF && (carac == '0' || carac == '1'))
            numero[i][j++] = carac - '0';
      if (j == 0){
         return 0;
      }else{
         for (int k = limite; k > 0; k--)
            numero[i][k-1] = (j >= 1)
            ? numero[i][--j]:0;
      }
   }
   return 1;
}
 
int lecturaBinarios(char numero[][limite]);
void sumaBinarios(char result[],char numero[][limite]);
 
int main(int argc, char const *argv[]){
    system("@cls||clear");
    printf ("PROGRAMA PARA SUMAR DOS NUMEROS BINARIOS\n");
   char numero[2][limite], result[limite+1];
   if (lecturaBinarios(numero)){
      sumaBinarios(result, numero);
      printf("");
 
    printf ("\nRESULTADO\n");
      for (int j = 0; j < limite+1; j++)
         printf("%d", result[j]);
      printf("\n");

   }else{
      printf("\nBINARIOS INGRESADOS NO VALIDOS\n");
            
   }
    return 0;
}
