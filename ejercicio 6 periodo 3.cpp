#include <stdio.h>
int main()
{
   int numero;

   printf( "Escriba el numero del dado: " );
   scanf( "%d", &numero );

   switch ( numero )
   {
      case  1 : printf( "En la cara opuesta esta el \"seis\"." );
                break;
      case  2 : printf( "En la cara opuesta esta el \"cinco\"." );
                break;
      case  3 : printf( "En la cara opuesta esta el \"cuatro\"." );
                break;
      case  4 : printf( "En la cara opuesta esta el \"tres\"." );
                break;
      case  5 : printf( "En la cara opuesta esta el \"dos\"." );
                break;
      case  6 : printf( "En la cara opuesta esta el \"uno\"." );
                break;
      default : printf( "El numero ingresado es incorrecto." );
   }

   return 0;
}
