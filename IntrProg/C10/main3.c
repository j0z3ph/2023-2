/**
 * @file main3.c
 * @author Jose Luis
 * @brief Matrices
 * @version 0.1
 * @date 2023-03-10
 * 
 * @copyright GPLv3
 * 
 */
#include<stdio.h>

int main()
{
    int m[3][3], cont = 1;
    for (int fila = 0; fila < 3; fila++)
    {   
        for (int columna = 0; columna < 3; columna++)
        {
            m[fila][columna] = cont;
            cont++;
        }
    }
    
    for (int fila = 0; fila < 3; fila++)
    {   
        for (int columna = 0; columna < 3; columna++)
        {
            printf("%i ", m[fila][columna]);
        }
        printf("\n");
    }

    return 0;
}
