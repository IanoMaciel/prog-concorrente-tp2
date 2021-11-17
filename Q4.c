#include <stdio.h>
#include <stdlib.h>

#define TAM 10 // trocar para 1000
#define ESCALAR 2

int main()
{
    int i;
    int array1[TAM], array2[TAM];

    for(i = 0; i < TAM; i++)
        array1[i] = rand() % 10;
    
    printf("ArrayA:");
    for(i = 0; i < TAM; i++)
        printf(" [%d]", array1[i]);
    
    printf("\nArray resultante:");
    for(i = 0; i < TAM; i++)
    {
        array2[i] = ESCALAR * array1[i];
        printf(" [%d]", array2[i]);
    }
}