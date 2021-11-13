#include <stdio.h>
#include <stdlib.h>

#define tam 3


int main()
{
    int array[tam][tam];
    int linha, coluna;
    int acumulador = 0;
    
    // preenche e imprime matriz
    printf("Matriz\n");
    for(linha = 0; linha < tam; linha++)
    {
        for(coluna = 0; coluna < tam; coluna++)
        {   
            array[linha][coluna] = ++acumulador;
            printf("[%d]", array[linha][coluna]);
        }
        printf("\n");
    }
    
    // imprime matriz inversa
    printf("\nMatriz resultante\n");
    for(linha = tam-1; linha >= 0; linha--)
    {
        for(coluna = tam-1; coluna >= 0; coluna--)
            printf("[%d]", array[linha][coluna]);
        printf("\n");
    }
}