#include <stdio.h>
/*
4)	Escribir un programa que para una fecha ingresada por un usuario (año, mes, día) determine: 
a)	Si es una fecha válida. 
b)	Si el año es bisiesto o no. 
c)	La cantidad de días que faltan para fin de mes. 
Nota: un año es bisiesto si es un número divisible por 4, pero no si es divisible por 100,
      excepto que también sea divisible por 400

*/

main()
{

int iBandera = 0 ;               // INICIO BANDERA (BANDERA = 0  ES APAGADA)     DISTINTA DE 0 ES ENCENDIDA.
int anio ;
//  anio % 4.
//  anio % 100.
//  anio % 400.
                 
                printf("Ingrese un anio por favor: ");
                scanf("%i",&anio);

            if (anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0)
                iBandera = 1;           // Activo la bandera ( 1 ) 



            if (iBandera == 1)  {       //si es l año es bisiesto.
                    printf("\n El Anio  %i   ES bisiesto \n", anio);
                } 



            else   {                   // Se mantiene en apagado (0) si no es bisiesto.
                    printf("\n El Anio  %i   NO es bisiesto \n",anio);
                }

}

