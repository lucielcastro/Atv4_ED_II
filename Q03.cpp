#include <stdio.h>
#include<conio.h>

int main ()
{  
   int x, y;
   int *p1;
   int *p2;
   printf("\nInforme dois numeros inteiros: ");
   scanf("%d %d", &x, &y);
   p1 = &x;
   p2 = &y;
   if (p1 > p2) printf ("\nEd x: %d\nEd y: %d\nConteudo de X: %d", p1, p2, *p1);
   else         printf ("\nEd x: %d\nEd y: %d\nConteudo de Y: %d", p1, p2, *p2);
   printf("\nPressione qualquer tecla para finalizar!");
   getch();
   printf ("\n\n");
return 0;
}