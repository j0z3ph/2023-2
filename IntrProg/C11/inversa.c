/**
 * @file inversa.c
 * @author Jose Luis
 * @brief Inversa de una matriz
 * @version 0.1
 * @date 2023-03-17
 * 
 * @copyright GPL v3
 * 
 */
#include<stdio.h>

void imprime(int matrix[3][3]);

int main()
{
    int matrix[3][3], traspuesta[3][3];
    int cont = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = cont;
            cont++;
        }
    }

    imprime(matrix);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            traspuesta[j][i] = matrix[i][j];
        }
    }

    imprime(traspuesta);
    
    
    return 0;
}


/**
 * @brief Imprime una matriz de 3x3
 * 
 * @param matrix La matriz a imprimir.
 */
void imprime(int matrix[3][3]) {
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
}
