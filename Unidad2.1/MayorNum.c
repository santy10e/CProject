#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int ab, b, c;
    printf("Ingrese los numeros (#,#,#) ");
    scanf("%d,%d", &ab,&b,&c);

    int mayor = ab;

    {if (ab>mayor){
    
        mayor = b;    
        }
    
    
    {if (c>mayor){
        mayor = c;
    }
        printf("Mayor es:%d", mayor);
        printf("\n");
        return 0; 
        
}

