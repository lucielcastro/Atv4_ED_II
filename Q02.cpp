#include <stdio.h>
#include<conio.h>

int main ()
{
   int x = 10;
   int y = 3;
   int *p1;
   int *p2;
   p1 = &x;
   p2 = &y;
   printf("\nEndereco X: %d\nEndereco Y: %d", p1, p2);
  
   if (p1 > p2) printf ("\nA variavel x tem o maior endereco de memoria!");
   else         printf ("\nA variavel y tem o maior endereco de memoria!");
   printf ("\n");
   printf("\nPressione qualquer tecla para finalizar!");
   getch();
   printf ("\n\n");
return 0;
}