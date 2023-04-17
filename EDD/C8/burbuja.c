/**
 * @file burbuja.c
 * @author Jose Luis Cruz
 * @brief Algoritmo de la burbuja
 * @version 0.1
 * @date 2023-04-17
 *
 * @copyright GPL v3
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
#define true 1;
#define false 0;

void print(int arr[])
{
    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n");
}

int main()
{
    int arr[N], aux, swap = true;
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        arr[i] = (rand() % (N * 2));
    }

    print(arr);

    for (int i = 0; i < (N - 1); i++)
    {
        if (!swap)
            break;
        else
            swap = false;
        for (int j = 0; j < (N - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                swap = true;
            }
        }
    }

    print(arr);

    return 0;
}
