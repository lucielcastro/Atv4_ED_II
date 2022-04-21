#include<stdio.h>
#include<conio.h>

int main()
{
    float mat[3][3];
    float *p1[3][3];
    int i, j;

    for(i=0; i<3; i++) {
       for(j=0; j<3; j++) {
         printf("\nInforme elemento da linha %d, coluna %d: ", i, j);
         scanf("%f", &mat[i][j]);
        }
    }
    for(i=0; i<3; i++) {
      for(j=0; j<3; j++)
        p1[i][j] = &mat[i][j];
    }
    printf("\n");//saltar linha 

    for(i=0; i<3; i++) {
       for(j=0; j<3; j++)
          printf(" %.1f", *p1[i][j]);
    printf("\n");//saltar linha 
    }
    printf("\n");//saltar linha
    
    for(i=0; i<3; i++) {
       for(j=0; j<3; j++)
          printf(" %o", p1[i][j]);
    printf("\n");//saltar linha 
    }
    printf("\nPressione qualquer tecla para finalizar!");
    getch();
}