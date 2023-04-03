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
    int temp = 0;
    srand(time(NULL));
    temp = rand() % 10;
    clearScreen();
    printf("Usuario, proporcione un entero mayor que 0: ");
    scanf("%i", &n);

    res = suma(n);

    printf("La suma de 1 hasta %i es %i\n", n, res);

    // Llenamos el arreglo
    for (int i = 0; i < max; i++)
    {
        arr[i] = rand() % 10;
    }

    imprimeArreglo(arr, max);

    printf("\nEl elemento mas grande en el arreglo es: %i\n", elMasGrande(arr, max));

    // Creamos un nuevo arreglo ordenado
    for (int i = 0; i < max; i++)
    {
        arr[i] = temp + i;
    }

    printf("Resultado de la busqueda: %s\n",
           (busquedaBinaria(arr, max, (rand() % 10)) == 1 ? "Encontrado" : "No encontrado"));

    printf("El numero de digitos de 12952848 es: %i\n", sDigitos(12952848));

    return 0;
}
