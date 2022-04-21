#include<stdio.h>
#include<conio.h>
#include<math.h>

 int Troca(int *a, int *b)
{   int aux;
    printf("\nA: %d\nB: %d ", *a, *b);
    
    aux = *a + *a + *b + *b;

    return aux;
    

    //printf("\nA: %d\nB: %d ", *a, *b);
}
int main()
{
    int n1, n2;
    int *res1, res2;
    printf("\nInforme dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);

    *res1 = Troca(&n1, &n2);
    printf("\nSoma do dobro: %d ", *res1 );

    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}

