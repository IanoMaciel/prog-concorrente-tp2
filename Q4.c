#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define TAM 1000 // trocar para 1000
#define ESCALAR 2

int main()
{   
    // criando variáveis 
    int i;
    int array1[TAM], array2[TAM];

    // atribuindos valores aleátórios para o array1
    for(i = 0; i < TAM; i++)
        array1[i] = rand() % 10;
    
    // imprime array1
    printf("ArrayA:");
    for(i = 0; i < TAM; i++)
        printf(" [%d]", array1[i]);
    
    
    printf("\nArray resultante:");
     #pragma omp parallel for
    for(i = 0; i < TAM; i++)
    {
        array2[i] = ESCALAR * array1[i];
        printf(" [%d]", array2[i]);
    }
}