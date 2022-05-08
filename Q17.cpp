#include <stdio.h>
#include <stdlib.h>

void separa(float num, int *inteiro, float *frac) {
    *inteiro = (int)num;
    *frac = num - *inteiro;
}

int main()
{
    float num, frac;
    int inteira;
    
    printf("\nInforme num: ");
    scanf("%f", &num);

    separa(num, &inteira, &frac);

    printf("%f: %i e %f", num, inteira, frac);

    return 0;
}