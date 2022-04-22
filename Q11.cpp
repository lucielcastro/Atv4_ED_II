#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{   
     int n[5];
     int *p[5];
     int i;
     
     printf("\nInforme 5 valores inteiros para o vetor:\n\n");
     for(i=0; i<5; i++) {
         printf(" posicao %d: ", i);
         scanf("%d", &n[i]);
     }
     for(i=0; i<5; i++)
         p[i] = &n[i];
     
     printf("\nvalores de N: ");
     for(i=0; i<5; i++) {
	     printf(" %d", n[i]);
    }  
     printf("\n");
     printf("\nEndereco de N: ");
     for(i=0; i<5; i++) {
	     printf(" %d", &n[i]);
    }  
     printf("\n");
     printf("\nValor de P: ");
     for(i=0; i<5; i++){
	     printf(" %d ", p[i]);
    }  
     printf("\n");
     printf("\nConteudo de *P: ");
     for(i=0; i<5; i++){
	     printf(" %d ", *p[i]);
    } 
     printf("\n"); 
     printf("\nEndereco dos numeros pares:\n");
         for(i=0; i<5; i++){
    	     if(n[i] %2 ==0){
    		 printf("\nIndice: %d Valor Par: %d Endereco: %d",  i, *p[i], p[i]);
		     } 
            
    }
    getch();
} 