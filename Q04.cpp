#include<stdio.h>
#include<conio.h>

void Troca(int a, int b)
{   int *Pn1;
    int *Pn2;
 
    printf("\nA: %d\nB: %d ", a, b);
     Pn1 = &a;
    Pn2 = &b;
    
    *Pn1 = b;
    *Pn2 = a;
    printf("\nB: %d\nA: %d ", b, a);
}
int main()
{
    int n1, n2;
    printf("\nInforme dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);
    Troca(n1,n2);
    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}