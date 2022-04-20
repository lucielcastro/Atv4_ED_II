#include<stdio.h>
#include<stdlib.h>
#include <conio.h>

int main() 
{
  int n1 = 12 ;
  float r1 = 18.451;
  char l = 'C';
  int *p1;
  float *p2;
  char *p3;
  
  p1  = &n1;
  p2  = &r1;
  p3  = &l;

  printf("p1 %d\n",p1);
  printf("p1 %d\n",*p1);
  printf("p2 %d\n",p2);
  printf("p2 %f\n",*p2);
  printf("p3 %d\n",p3);
  printf("p3 %c\n",*p3);
  
  *p1 = 13;
  *p2 = 91.145;
  *p3 = 'A';
  printf("p1 %d\n",p1);
  printf("p1 %d\n",*p1);
  printf("p2 %d\n",p2);
  printf("p2 %f\n",*p2);
  printf("p3 %d\n",p3);
  printf("p3 %c\n",*p3);
  
  printf("Inteiro %d\n",n1);
  printf("Real %f\n",r1);
  printf("Char %c\n",l);
  
  return 0;
}