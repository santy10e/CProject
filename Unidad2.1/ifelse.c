#include<stdio.h>
#include<stdlib.h>

enum semana_laboral 
{
    LUNES, 
    MARTES, 
    MIERCOLES, 
    JUEVES, 
    VIERNES
};
int main(int argc, char const *argv[])
{
    system("@cls||clear");
    int dia = 1;
    enum semana_laboral diasemana;
    char *c =  "L";
switch (dia){
	case MARTES: {
		printf ("Es martes (%d), Teoria de la Programacion", MARTES);
        scanf("%d", &dia);
		break;
	}
	case MIERCOLES: {
		printf ("Es Miercoles (%d), Teoría de la Programacion", dia);
		if (c =  "L"){
			printf ("\ten Laboratorio\n");
		}  else {
			printf ("\ten Clases\n");
		}
		break;
	}
	case VIERNES: {
		printf ("Es Viernes (%d), Teoria de la Programacion", VIERNES);
		if (c == "L"){
				printf ("\t excepcion hoy tambien en Laboratorio\n");
		} 
		break;
	}
	default: {
		printf ("No hay, Teoria de la Programacion");
	}
}
return 0;
}
