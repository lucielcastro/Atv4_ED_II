#include<stdio.h>
#include<conio.h>

int main()
{
    float n1[10];
    float *p[10];
    int i;

    for(i=0; i<10; i++)
    {
    printf("\nInforme elemento posicao %d: ", i);
    scanf("%f", &n1[i]);
    }
    for(i=0; i<10; i++)
     p[i] = &n1[i];

    for(i=0; i<10; i++)
    printf("\nConteudo: %.1f", *p[i]);
    printf("\n");
    for(i=0; i<10; i++)
    printf("\nEndereco: %o", p[i]);

    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}