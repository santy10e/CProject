//autores:
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
system("@cls||clear");
int edad, antiguedad;   
//3 grupos de clasificación de jubilación
//char jubilacion[50];
char *jub;
char *a ="Por Edad";
char *b = "Por Antiguedad Joven";
char *c = "Por Antiguedad Adulta";
printf("Introduzca la edad de la persona adscrita a la jubilacion: ");
scanf ("%d", &edad);
printf("Introduzca antiguedad de empleo de la persona adscrita a la jubilacion: ");
scanf ("%d", &antiguedad);
    if(edad >= 60 && antiguedad < 25){
        jub = a;
    }
    if(edad < 60 && antiguedad >= 25){
        jub = b;
    }
    if(edad >= 60 && antiguedad >= 25){
        jub = c;
    }

    printf("\nSu clasficiacion de jubilacion es: %s", jub);
    return 0;
}
