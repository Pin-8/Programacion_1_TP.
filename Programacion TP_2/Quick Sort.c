
#include <stdio.h>
#include <stdio.h>
/*

Quick sort

Profesor , no e queda muy claro el funcionamiento de Quick sort, si bien entiendo leyendo el codigo
que crea una segunda matriz para colocar valores ahi en cada pasada.
No me queda muy clara funcion Quicksort.


*/
 
void qs(int lista[],int limite_izq,int limite_der){

    int izq,der,temporal,pivote;

    izq=limite_izq;
    der = limite_der;
    pivote = lista[(izq+der)/2];

    do{
        while(lista[izq]<pivote && izq<limite_der)izq++;
        while(pivote<lista[der] && der > limite_izq)der--;

        if(izq <=der){
            temporal= lista[izq];
            lista[izq]=lista[der];
            lista[der]=temporal;
            izq++;
            der--;
        }

    }while(izq<=der);
    if(limite_izq<der){qs(lista,limite_izq,der);}
    if(limite_der>izq){qs(lista,izq,limite_der);}
}

 
void quicksort(int lista[],int n){
    qs(lista,0,n-1);
}
 

int main(int argc, const char * argv[]){

    int lista[] ={100,56,0,1,-45,2,46,5,9,6,67,23,5};
    int size = sizeof(lista)/sizeof(int);

    printf("\n Lista Desordenada \n"); 


    for (int i=0; i<size; i++){

        printf("%d ,",lista[i]);        
    }

 
    printf("\n");

    quicksort(lista,size);


    printf("\n Lista Ordenada \n");

    for (int i=0; i<size; i++){

        printf("%d ,",lista[i]);  //agregar , sin nesecidad de otra funcion

       // if(i<size-1)
                             //funcion que permite agregar , hasta que termine 
            //printf(",");
    }

 

    return 0;
}











/*             OTRO PROGRAMA QUE NO PUDE HACER ANDAR.

Quick Sort


#include <stdio.h>

int main () {

  
  // El arreglo
  int arreglo[] = {28, 11, 96, -5, 21, 18, 12, 22, 30, 97, -1, -40, -500};
  
  Calcular la longitud, puede ser definida por ti o calculada:

  int longitud = sizeof arreglo / sizeof arreglo[0];
  
  Imprimirlo antes de ordenarlo
  
  printf("Imprimiendo arreglo antes de ordenar...\n");
  for (int x = 0; x < longitud; x++) {
    printf("%d ", arreglo[x]);
  }
  // Un salto de línea
  printf("\n");

  
  Invocar a quicksort indicando todo el arreglo, desde 0 hasta el índice final
  

 printf("%i  %i  %i",arreglo,0,longitud-1);
 // quicksort(arreglo, 0, longitud - 1);
  
  Imprimirlo después de ordenarlo
  
  printf("Imprimiendo arreglo despues de ordenar...\n");
  for (int x = 0; x < longitud; x++)
    printf("%d ", arreglo[x]);
  return 0;
}
/*
*/