#include <stdio.h>
int main()
{
    int numero;
    printf("Indique un numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("%d es par.", numero);
    else
        printf("%d es impar.", numero);
    return 0;
}
