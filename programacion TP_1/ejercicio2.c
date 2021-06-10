/*2)	Un cyber café necesita un programa para procesar la información relacionada
 con las computadoras que posee.
 
  Se necesita leer cantidad de computadoras,     v
  y precio por hora de uso.                       v
   Luego ingresar
   la cantidad de horas de uso de cada computadora 
   en el mes.                                        v
     
se pide:  
a)	calcular el monto total recaudado por el cyber en el mes.         v
b)	informar cual fue la computadora con menor cantidad de horas de uso y
 monto recaudado por la misma            v
*/
#include <stdio.h>
 main(){
   int iCantidad_pc = 0;
   int Precio_hs = 0;
  // int hs_mes = 0;
   //int Valor_mes[iCantidad_pc]; 
  // int hs_uso[iCantidad_pc];
   int recaudado = 0;
   int valor_menor = 0;
   int menor_recaudado = 0;
   int contador ;



   printf("La cantidad de computadoras que el ciber posee es de :\t");
   scanf("%i",&iCantidad_pc);
     
    
   printf("Ingrese el precio por hora de uso: \t");
   scanf("%i",&Precio_hs);


 int hs_mes = 0;
             int hs_uso[iCantidad_pc];
             int Valor_mes[iCantidad_pc];

        for (int i = 0; i < iCantidad_pc ; i++)
        {
             
            
             
            printf("\n ingrese las horas de uso de la compu %i durante un mes  \n ",i+1);
            scanf("%i",&hs_mes);
            hs_uso[i] = hs_mes;
            Valor_mes[i] = Precio_hs * hs_mes;
            recaudado += Valor_mes[i];
           
          if (hs_uso[i]<hs_uso[i-1]){
                 valor_menor = hs_uso[i];
                 contador=i+1;    // posicion devalor menor
                 menor_recaudado = valor_menor*Precio_hs;
                 

             }
        }  
    
        //printf("\n valor total %i \n", recaudado);
      

        for (int i = 0; i < iCantidad_pc ; i++){
          //Valor_mes[i] = hs_uso[i] * Precio_hs;

            printf("La compu %i tiene %i hs de uso durante un mes, gastando: $%i \n",i+1, hs_uso[i], Valor_mes[i]);
           // recaudado += Valor_mes[i];
        }
    
        printf("\n Recaudado en total durante un mes es : $%i \n", recaudado);
        printf("\n la computadora que menos hs de uso tuvo fue la:  %i;\n Tan solo:   %ihs   En el mes. \n Recaudando:\t $%i",contador,valor_menor, menor_recaudado);
        
        
        
      
        

 }
/*  for (int i = 0; i < iCantidad_pc; i++)
        {
             printf("tiene menos hs que la compu con \t");
            if (hs_uso [i] < hs_uso[i+1] && hs_uso[i-1] < hs_uso[i])
            {
                printf("\n hs uso %i", hs_uso[i]);
                
            } 


            // printf("\n valor menor  %i", valor_menor);
            
        }
        



*/
// printf(" \n valor menor es:  %i hs",valor_menor);