#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define tam 3

int main()
{
    int array[tam][tam];
    int linha, coluna;
    int cont = 0, total = 0;
    
    // preenche e imprime matriz
    printf("Matriz\n");
    for(linha = 0; linha < tam; linha++)
    {
        for(coluna = 0; coluna < tam; coluna++)
        {   
            array[linha][coluna] = ++cont;
            printf("[%d]", array[linha][coluna]);
        }
        printf("\n");
    }
    
    // operação de soma
    #pragma omp parallel for
    for(linha = 0; linha < tam; linha++)
    {
        for(coluna = 0; coluna < tam; coluna++)
            total += array[linha][coluna];
    }

    printf("\nTotal: %d", total);
}