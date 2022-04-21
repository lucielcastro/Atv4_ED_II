#include<stdio.h>
#include<conio.h>

int main()
{
    int n1[5];
    int *p[5];
    int i;

    for(i=0; i<5; i++)
    {
    printf("\nInforme elemento posicao %d: ", i);
    scanf("%d", &n1[i]);
    }

    for(i=0; i<5; i++)
     p[i] = &n1[i];
    
    printf("\nConteudo do vetor:");
    for(i=0; i<5; i++)
    printf(" %d ", *p[i]);

    for(i=0; i<5; i++)
     *p[i] = *p[i]+*p[i];
    
    printf("\nO dobro de cada elemento do vetor:");
    for(i=0; i<5; i++)
    printf(" %d ", *p[i]);
    printf("\n");
    printf("\nEndereco: ");
    for(i=0; i<5; i++)
    printf("%o ", p[i]);

    printf("\nPressione qualquer tecla para finalizar!\n\n");
    getch();

}