/**
 * @file quick.c
 * @author Jose Luis
 * @brief Quicksort
 * @version 0.1
 * @date 2023-05-02
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100000000

void genera(int arr[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (N * 2);
    }
}

void imprime(int arr[], int size)
{
    printf("\n[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n");
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int piv = arr[l];
        int i = l + 1;
        int j = l + 1;
        int aux = 0;

        for (; j <= r; j++)
        {
            if (arr[j] <= piv)
            {
                aux = arr[j];
                arr[j] = arr[i];
                arr[i] = aux;
                i++;
            }
        }

        arr[l] = arr[i - 1];
        arr[i - 1] = piv;

        quickSort(arr, l, i - 2);
        quickSort(arr, i, r);
    }
}

int main()
{
    int *arr = (int *)malloc(sizeof(int) * N);
    clock_t ini, fin;
    double el;

    printf("\nGenerando...");
    genera(arr, N);
    //imprime(arr, N);

    printf("\nOrdenando...");
    ini = clock();
    quickSort(arr, 0, N - 1);
    fin = clock();
    el = (double)(fin - ini) / (double)CLOCKS_PER_SEC;
    printf("\nTiempo: %lf", el);
    //imprime(arr, N);

    return 0;
}
