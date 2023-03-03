/**
 * @file tria.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    int n = 0, fila = 1, columna = 1;
    printf("Valor: ");
    scanf("%i", &n);

    for (fila = 1; fila <= n; fila++)
    {
        for (columna = 1; columna <= fila; columna++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
