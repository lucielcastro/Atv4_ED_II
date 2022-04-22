#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

#define TAM 5

int main (){

 int vet[TAM], i;
 int *Aux;
 Aux = vet;
 
 printf("\tDigite %d elementos:\n", TAM);
 
 for(i = 0; i < TAM; i++){
  printf("%d: ",i+1);
    scanf("%d", &vet[i]);
 }
 
 printf("\n\tELEMENTOS:\n\n");
    for(i = 0; i < TAM; i++){
        printf("%d  ",vet[i]);
 }
 printf("\n\nENDERECOS DO ARRAY:\n");
 
 for(i = 0; i < TAM; i++){
     printf("%i : %i : %i\n",i+1, vet[i], Aux++);
 } 
 
 printf("\nENDERECOS DO ARRAY PAR:\n");
 
 Aux = vet;
 
 for(i = 0; i < TAM; i++){
  
  if(vet[i] %2 == 0){
   printf("\nNumero %d eh par : Posicao = %d",vet[i], Aux);
  }
  Aux++;
 }
    printf("\nPressione qualquer tecla para finalizar!\n\n");
    getch();

}