#include<stdio.h>
#include<conio.h>

 void Troca(int *a, int *b)
{   int aux;
    printf("\nA: %d\nB: %d ", *a, *b);
    
    aux = *a;
    *a = *b + aux;
     *b = *b;
}
int main()
{
    int n1, n2;
    int res1, res2;
    printf("\nInforme dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);

    Troca(&n1, &n2);
    printf("\nA: %d\nB: %d ", n1, n2);
    

    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}