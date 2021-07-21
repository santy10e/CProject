#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* contiene el prototipo de la funciÃƒÂ³n time */
 
/* constantes de enumeraciÃƒÂ³n que representan es estatus del juego */
enum Estatus { CONTINUA, GANA, PIERDE };
 
int tiraDados( void ); /* prototipo de la funciÃƒÂ³n */
 
/* la funciÃƒÂ³n main comienza la ejecuciÃƒÂ³n del programa */
int main()
{ 
   int suma;       /* suma del tiro de datos */
   int miPunto;    /* punto ganado */
 
   enum Estatus estatusJuego; /* puede contener CONTINUA, GANA o PIERDE */
 
   /* randomiza el generador de nÃƒÂºmeros aleatorios mediante el uso de la funciÃƒÂ³n time */
   srand( time( NULL ) );
 
   suma = tiraDados(); /* primer tiro de los dados */
 
   /* determina el estatus del juego basado en la suma de los dados */
   switch( suma ) {
 
      /* gana en el primer tiro */
      case 7:          
         estatusJuego = GANA;
         break;
 
      /* pierde en el primer tiro */
      case 2: 
      case 3: 
      case 12:  
         estatusJuego = PIERDE;
         break;
 
      /* recuerda el punto */
      default:                  
         estatusJuego = CONTINUA;
         miPunto = suma;
         printf( "Su punto es %dn", miPunto );
         break; /* opcional */
   } /* fin de switch */
 
   /* mientras el juego no se complete */
   while ( estatusJuego == CONTINUA ) {    
      suma = tiraDados(); /* tira de nuevo los dados */
 
      /* determina el estatus del juego */
      if ( suma == 7 ) { /* gana por punto */
         estatusJuego = GANA; /* fin del juego, gana el jugador */
      } /* fin de if */
      else {
 
         if ( suma == miPunto ) { /* pierde al tirar 7 */
            estatusJuego = PIERDE; /* termina el juego, pierde el jugador */
         } /* fin de if */
       
      } /* fin de else */
 
   } /* fin de while */
 
   /* despliega el mensaje del ganador o perdedor */
   if ( estatusJuego == GANA ) { /* Ã‚Â¿GanÃƒÂ³ el jugador? */
      printf( "Gana el jugadorn" );
   } /* fin de if */
   else { /* pierde el jugador */ 
      printf( "Pierde el jugadorn" );
   } /* fin de else */
 
   return 0; /* indica terminaciÃƒÂ³n exitosa */
 
} /* fin de main */
 
/* tiro de dados, calcula la suma y despliega los resultados */
int tiraDados( void )
{
   int dado1;    /* primer dado */
   int dado2;    /* segundo dado */
   int sumaTemp; /* suma de los dados */
 
   dado1 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado1 */
   dado2 = 1 + ( rand() % 6 ); /* toma el aleatorio para el dado2 */
   sumaTemp = dado1 + dado2;   /* suma el dado1 y el dado2 */
 
   /* despliega los resultados de este tiro */
   printf( "El jugador tiro %d + %d = %dn", dado1, dado2, sumaTemp );
   
   return sumaTemp; /* devuelve la suma de los dados */
 
} /* fin de la funciÃƒÂ³n tiraDados */