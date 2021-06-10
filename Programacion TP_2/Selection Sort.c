#include <stdio.h>
/*

Investigar, explicar y programar uno de los siguientes algoritmos de ordenamiento

Selection Sort:

POR LO QUE ENTIENDO ESTE ALGORITMO PERMITE IR AGREGANDO VALORES A LA PRIMERA POSICION DE UN ARRAY SI SE CUMPLE ALGUNA CARACTERISTICA
EN ESTE CASO PERMITE ORDENAR DE MENOR A MAYOR 
EJ: COMPRANDO 2 < 4 ? SI, ENTONCES 2 QUERDA EN LA POSICION [0] Y 4 PASARIA A LA POSICION [1]; Y HACI COMPARACIONES SUSECIVAS 
2 < X , NO, ENTONCES SE COMPARA CON EL SIGUIEN Y EL SIGUIENTE HASTA ENCONTRAR SU UBICACION DADO SU VALOR.

*/
int main()
{
  int array[100], Numero, Contador, d, posicion, t;

  printf("Ingrese la cantidad de numeros que desea ordenar:\n");
  scanf("%d", &Numero);


  printf("ingrese los %d numeros:\n", Numero);


  for (Contador = 0; Contador < Numero; Contador++){
  printf("\n El numero %i es: ",Contador+1);          //Cargo numeros en un array
  scanf("%d", &array[Contador]);
  }
  for (Contador = 0; Contador < (Numero - 1); Contador++) 
  {
    posicion = Contador;

    for (d = Contador + 1; d < Numero; d++)
    {
      if (array[posicion] > array[d])
        posicion = d;
    }

      if (posicion != Contador)
    {
      t = array[Contador];
      array[Contador] = array[posicion];
      array[posicion] = t;
    }
  }

  printf("La lista ordenada de menor a mayor es:\n");

  for (Contador = 0; Contador < Numero; Contador++)
    printf(" %d \n", array[Contador]);

  return 0;
}