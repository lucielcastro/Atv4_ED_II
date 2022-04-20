#include <stdio.h>
#include<conio.h>

int main ()
{
   int x = 10;
   int y = 3;
    
   printf("\nEndereco X: %d\nEndereco Y: %d", &x, &y);
  
   if (&x > &y) printf ("\nA variavel x tem o maior endereco de memoria!");
   else         printf ("\nA variavel y tem o maior endereco de memoria!");
   printf ("\n");
   printf("\nPressione qualquer tecla para finalizar!");
   printf ("\n\n");
return 0;
}