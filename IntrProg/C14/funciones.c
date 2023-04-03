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

int busquedaBinariaR(int arr[], int tamanio, int lost, int min, int max) {
    if (min <= max) {
        int med = ((max - min)/2) + min;
        if(arr[med] == lost) {
            return 1;
        } else {
            if(lost < arr[med]) {
                max = med - 1;
            } else {
                min = med + 1;
            }
            return busquedaBinariaR(arr, tamanio, lost, min, max);
        }
    }
    return 0;
}


int busquedaBinaria(int arr[], int tamanio, int lost) {
    int min = 0;
    int max = tamanio - 1;
    int med = ((max - min)/2) + min;
    if (min <= max) {
        med = ((max - min)/2) + min;
        if(arr[med] == lost) {
            return 1;
        } else {
            if(lost < arr[med]) {
                max = med - 1;
            } else {
                min = med + 1;
            }
            return busquedaBinariaR(arr, tamanio, lost, min, max);
        }
    }
    return 0;
}


int cDigitos(int e) {
    int d = e, m = 0;
    static int cont = 0;
    if(d > 0) {
        d /= 10;
        m %= 10;
        cont++;
        return cDigitos(d);
    }
    return cont;
}

int sDigitos(int e) {
    int d = e, m = 0;
    static int cont = 0;
    if(d > 0) {
        m = d % 10;
        d /= 10;
        cont+=m;
        return sDigitos(d);
    }
    return cont;
}


void clearScreen()
{
#ifdef __WIN32__
    system("cls");
#else
    system("clear");
#endif
}