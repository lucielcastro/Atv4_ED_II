#include<stdio.h>
#include<conio.h>
#include<math.h>

 int* Ordenado(int vet[])
{   int aux;
    printf("\nA: %d\nB: %d ", *a, *b);
    
    aux = *a + *a + *b + *b;

    return aux;
    

    //printf("\nA: %d\nB: %d ", *a, *b);
}
int main()
{
    int *vet, n = 3, i;
    
    for( i=0; i<n; i++){
    printf("\nInforme valor %d: ", i+1);
    scanf("%d", *(vet+i));}

    for( i=0; i<n; i++)
    printf(" %d ", Ordenado(*(vet+i)));

    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}
