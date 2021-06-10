

#include <stdio.h>
#include <stdbool.h>





#define MAX 7
/*

Al igual que Los anteriores Shell Sort permite el intercambio de numeros dentro de una matriz por mas que estos esten muy separados.
basicamente desplaza al elemento mayor al lugar del elemento menor si esta se encontrara en una posicion con un valor mas alto.


*/

int intArray[MAX] = {4,6,3,2,1,9,7}; // valores 

void printline(int count) {

   int i;
	
   for(i = 0;i < count-1;i++) {
      printf("=");
   }
	
   printf("=\n");
}

void display() {
   int i;
   printf("[");
	
   // Recorrer los elementos del array 
   for(i = 0;i < MAX;i++) {
      printf("%d ",intArray[i]);
   }
	
   printf("]\n");
}

void shellSort() {
   int inner, outer;
   int valueToInsert;
   int interval = 1;   
   int elements = MAX;
   int i = 0;
   
   while(interval <= elements/3) {               
      interval = interval*3 +1;
   }

   while(interval > 0) {
      printf(" iteration %d:",i); 
      display();
      
      for(outer = interval; outer < elements; outer++) {
         valueToInsert = intArray[outer];
         inner = outer;
			
         while(inner > interval -1 && intArray[inner - interval] 
            >= valueToInsert) {
            intArray[inner] = intArray[inner - interval];
            inner -=interval;
            printf(" Numero movido es el: %d\n",intArray[inner]);
         }
         
         intArray[inner] = valueToInsert;
         printf("El numero: %d fue insertado en la posicion: [%d]\n",valueToInsert,inner);
      }
		
      interval = (interval -1) /3;
      i++;
   }          
}

int main() {
   printf("Matriz de entrada: ");
   display();
   printline(50);
   shellSort();
   printf("Matriz de salida: ");
   display();
   printline(50);
   return 1;
}
 



 /*#include <stdio.h>
 
void shell_sort (int *a, int n) {
    int h, i, j, t;



    for (h = n; h /= 2;) {
        for (i = h; i < n; i++) {
            t = a[i];
            for (j = i; j >= h && t < a[j - h]; j -= h) {
                a[j] = a[j - h];
            }
            a[j] = t;
        }
    }
}
int a[] = {4, 65, 2, -31, 0, 99, 2, 83, 782, 1};
 
int main (int ac, char **av) {
    
    int n = sizeof a / sizeof a[0];
    int i;
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    shell_sort(a, n);
    for (i = 0; i < n; i++)
        printf("%d%s", a[i], i == n - 1 ? "\n" : " ");
    return 0;
}
*/