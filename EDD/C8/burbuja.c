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
#define N 50000
#define true 1;
#define false 0;

void genera(int arr[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = (rand() % (N * 2));
    }
}

void generaO(int arr[], int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }
}

void print(int arr[])
{
    printf("[ ");
    for (int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n");
}

void burbuja(int arr[], int size)
{
    int aux;

    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - 1 - i); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}

void burbuja2(int arr[], int size)
{
    int aux, swap = true;

    for (int i = 0; i < (size - 1); i++)
    {
        if (!swap)
            break;
        else
            swap = false;
        for (int j = 0; j < (size - 1 - i); j++)
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
}

void seleccion(int arr[], int size)
{
    int idxmaschiquito, aux;
    for (int i = 0; i < size; i++)
    {
        idxmaschiquito = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[idxmaschiquito])
            {
                idxmaschiquito = j;
            }
        }
        if(idxmaschiquito != i) {
            aux = arr[idxmaschiquito];
            arr[idxmaschiquito] = arr[i];
            arr[i] = aux;
        }
    }
}

void insercion(int arr[], int size) {
    int valor, j;
    for (int i = 1; i < size; i++)
    {
        valor = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if(arr[j] > valor) {
                arr[j+1] = arr[j];           
            } else {
                break;
            }
        }
        arr[j+1] = valor;
    }
}

int main()
{
    int arr[N];
    clock_t ini, fin;
    double elapsed;

    printf("\nGenerando...");
    genera(arr, N);
    printf("\nOrdenando...");
    ini = clock();
    burbuja(arr, N);
    fin = clock();
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed);

    printf("\nGenerando...");
    genera(arr, N);
    printf("\nOrdenando...");
    ini = clock();
    burbuja2(arr, N);
    fin = clock();
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed);


    printf("\nGenerando...");
    genera(arr, N);
    //print(arr);
    printf("\nOrdenando...");
    ini = clock();
    seleccion(arr, N);
    fin = clock();
    //print(arr);
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed);




    printf("\nGenerando...");
    genera(arr, N);
    //print(arr);
    printf("\nOrdenando...");
    ini = clock();
    insercion(arr, N);
    fin = clock();
    //print(arr);
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed);

    return 0;
}
