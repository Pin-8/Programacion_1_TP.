#include <stdio.h>

/*
1)	Realizar un programa que lea desde el teclado el ancho, 
alto y profundidad de un prisma rectangular
 (cuerpo geométrico de 6 caras rectangulares, como una caja)
  e informe su volumen y área de la superficie formada por sus caras
  */
main()
{
   
    int iAlto;
    int iAncho;
    int iProfundidad;
    int Volumen;
    int Area;
   
    Volumen= iAlto * iAncho * iProfundidad;

     printf ("Ingrese un valor para el ALTO del prisma rectangular \t");
     scanf("%i",&iAlto);
     printf ("\nAhora ingrese un valor para el ANCHO del prisma rectangular \t");
     scanf("%i",&iAncho);
     printf ("\nY por ultimo,ingrese un valor para la PROFUNDIDAD del prisma rectangular \t");
     scanf("%i",&iProfundidad);
 
    Volumen= iAlto * iAncho * iProfundidad;
    //Volumen = Altura7 × Ancho × profundidad
     printf("\n El volumen del prisma es:\t %i m^3", Volumen );
    
     printf(" \n \n");
   
    Area = 2*(iAncho * iProfundidad + iProfundidad * iAlto + iAlto *iAncho);
    printf("El area total del prisma es : %i m^2", Area);

   // AREA  = 2 × (ancho × profundidad + profundidad × altura + altura × ancho)
 


    
}
