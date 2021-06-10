#include<stdio.h>
/*
Insertion Sort



 La lógica utilizada para ordenar los elementos:

 for(i = 1; i <= n - 1; i++){
      for(j=i; j > 0 && a[j - 1] > a[j]; j--){
         t = a[j];
         a[j] = a[j - 1];
         a[j - 1] = t;
      }
   }


   Muy silimilar a selection sort este algoritmo tambien permite mostrar una lista de numeros ordenados por su valor
   de manera crecient (de menor a mayot) o ,con algunos cambios, decreciente (de mayor a menor ) mediente la comparacion sucesiva
   de numeros ej:
   si tenemos una lista de numeros:
    1[0]
    3[1]
    4[2]
    75[3]
     y queremos agregar 2 , se pocisionaria por sobre el 1 y menor a 3 ,  tomando el lugar de 3 y desplazando los valores
     superiores a 3 1 pocicion (i+1), quedando asi:
     1[0]
     2[1]
     3[2]
     4[3]
     75[4]
     

     Aclaro que al agregar un numero mas, la matriz sumaria una posicion mas pasando de [3] 4 valores/posiciones.
     A ser de [4].s





*/






int main(){

   
   int i, j, count, temp, number[25];

   printf("Cuantos numeros desea mostrar: ");
   scanf("%d",&count);

   printf("\n Ingrese los %d numeros: ", count);

   printf("\n\n");
  //  Almacenaría los números de entrada en la matriz:
   for(i=0;i<count;i++){
       printf("\n El numero %i es?? : \t ",i+1);    
      scanf("%d",&number[i]);
   }
   // Algoritmo insertion sort   O algoritmo de ordenamiento.
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }

   printf("\n\n Los numeros ordenados de menor a mayor son: \n");
   for(i=0;i<count;i++)
      printf("\n En la posicion %i quedaria el numero %d",i+1,number[i]);

   return 0;
}