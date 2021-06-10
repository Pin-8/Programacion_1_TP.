#include <stdio.h>

#define max 10
/*

El metodo que usa Marge sort es el de divider la matriz en 2 partes 
las ordena en orden, es decir, primero la parte izquierda y luego la parte derecha
para luego terminar uniendolas

*/



int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merging(int menor, int medio, int mayor) {
   int l1, l2, i;

   for(l1 = menor, l2 = medio + 1, i = menor; l1 <= medio && l2 <= mayor; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= medio)    
      b[i++] = a[l1++];

   while(l2 <= mayor)   
      b[i++] = a[l2++];

   for(i = menor; i <= mayor; i++)
      a[i] = b[i];
}

void sort(int menor, int mayor) {
   int medio;
   
   if(menor < mayor) {
      medio = (menor + mayor) / 2;
      sort(menor, medio);
      sort(medio+1, mayor);
      merging(menor, medio, mayor);
   } else { 
      return;
   }   
}

int main() { 
   int i;

   printf("Lista original sin ordenar:\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\n Lista despues del proceso de ordenamiento (Marge sort): \n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}