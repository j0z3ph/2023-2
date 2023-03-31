/**
 * @file funciones.c
 * @author Jose Luis
 * @brief Funciones varias
 * @version 0.1
 * @date 2023-03-31
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

int suma(int n)
{
    static int sum = 0;
    static int i = 1;
    if (n < 1)
    {
        return -1;
    }
    if (i <= n)
    {
        sum += i;
        i++;
        suma(n);
    }
    return sum;
}

void imprimeArreglo(int arr[], int n)
{
    static int i = 0;
    if (i < n)
    {
        printf("%i ", arr[i]);
        i++;
        imprimeArreglo(arr, n);
    }
}

int elMasGrande(int arr[], int n)
{
    static int theBigOne = -__INT32_MAX__;
    static int i = 0;
    if (i < n)
    {
        if (arr[i] > theBigOne)
        {
            theBigOne = arr[i];
        }
        i++;
        elMasGrande(arr, n);
    }
    return theBigOne;
}

void clearScreen()
{
#ifdef __WIN32__
    system("cls");
#else
    system("clear");
#endif
}