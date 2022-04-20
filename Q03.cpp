#include <stdio.h>
#include<conio.h>

int main ()
{  
   int x, y;

   printf("\nInforme dois numeros inteiros: ");
   scanf("%d %d", &x, &y);
   
   if (&x > &y) printf ("\nEd x: %d\nEd y: %d\nConteudo de X: %d",&x, &y, x);
   else         printf ("\nEd x: %d\nEd y: %d\nConteudo de Y: %d",&x, &y, y);
   printf("\nPressione qualquer tecla para finalizar!");
   printf ("\n\n");
return 0;
}