
/*
3)	realizar una función que reciba un caracter en minúscula como parámetro y
 devuelva  convertido a mayúscula.
 Hacer la función inversa, que convierta de mayúscula a minúscula.
 Crear un programa que utilice ambas funciones.
*/

#include <stdio.h>

main ()
{

    // Minusculas 97(a) hasta 122(z)
    // mayusculas 65    hasta 90
    // difencia es +/- 32

    char cLetra ;


       printf("Escriba una letra para convertila de mayuscula a minuscula o de minuscula a mayuscula:\t");
       scanf("%c", &cLetra);

    if (cLetra >=65 && cLetra <=90 ) {           // mayusculas a Minuscula
        printf(" \n Su letra convertida a minuscula es: %c \n",cLetra + 32);
      }

    if (cLetra >=97 && cLetra <= 122 ) {         // Minusculas  a Mayuscula
        printf("\n Su letra en mayuscula es: %c  \n",cLetra - 32);    
      }
    
    
    
}