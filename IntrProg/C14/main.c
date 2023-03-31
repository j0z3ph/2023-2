/**
 * @file main.c
 * @author Jose Luis
 * @brief Programa que solicita al usuario un entero
 * mayor que 0 y devuelve la suma acumulada hasta n.
 * @version 0.1
 * @date 2023-03-31
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"

int main()
{
    int n = 0, res = 0, max = 10, arr[max];
    srand(time(NULL));
    clearScreen();
    printf("Usuario, proporcione un entero mayor que 0: ");
    scanf("%i", &n);

    res = suma(n);

    printf("La suma de 1 hasta %i es %i\n", n, res);

    // Llenamos el arreglo
    for (int i = 0; i < max; i++)
    {
        arr[i] = rand() % 100;
    }

    imprimeArreglo(arr, max);

    printf("\nEl elemento mas grande en el arreglo es: %i\n", elMasGrande(arr, max));

    return 0;
}
