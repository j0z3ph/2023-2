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
#define N 100000000
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
        if (idxmaschiquito != i)
        {
            aux = arr[idxmaschiquito];
            arr[idxmaschiquito] = arr[i];
            arr[i] = aux;
        }
    }
}

void insercion(int arr[], int size)
{
    int valor, j;
    for (int i = 1; i < size; i++)
    {
        valor = arr[i];
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > valor)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = valor;
    }
}

void merge(int arr[], int l, int m, int r)
{

    int n1 = m - l + 1;
    int n2 = r - m;

    // generar arreglos temporales
    // int arrL[n1], arrR[n2];
    int *arrL = (int *)malloc(sizeof(int) * n1);
    int *arrR = (int *)malloc(sizeof(int) * n2);
    for (int i = 0; i < n1; i++)
    {
        arrL[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        arrR[i] = arr[m + i + 1];
    }

    // combinar
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2)
    {
        if (arrL[i] <= arrR[j])
        {
            arr[l] = arrL[i];
            i++;
        }
        else
        {
            arr[l] = arrR[j];
            j++;
        }
        l++;
    }

    while (i < n1)
    {
        arr[l] = arrL[i];
        i++;
        l++;
    }

    while (j < n2)
    {
        arr[l] = arrR[j];
        j++;
        l++;
    }

    free(arrL);
    free(arrR);
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + ((r - l) / 2);
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void mergeSortI(int arr[], int l, int r)
{
    for (int m = 1; m <= r - l; m = 2 * m)
    {
        for (int i = l; i < r; i += 2 * m)
        {
            int nl = i;
            int mid = i + m - 1;
            int nr = ((i + 2 * m - 1) < r) ? (i + 2 * m - 1) : r;
            if (mid <= nr)
                merge(arr, nl, mid, nr);
        }
    }
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int piv = arr[l];
        int i = l + 1, j = l + 1;
        int aux = 0;
        for (; j <= r; j++)
        {
            if (arr[j] <= piv)
            {
                aux = arr[i];
                arr[i] = arr[j];
                arr[j] = aux;
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
    double elapsed;

    /* printf("\nGenerando...");
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
    // print(arr);
    printf("\nOrdenando...");
    ini = clock();
    seleccion(arr, N);
    fin = clock();
    // print(arr);
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed);

    printf("\nGenerando...");
    genera(arr, N);
    // print(arr);
    printf("\nOrdenando...");
    ini = clock();
    insercion(arr, N);
    fin = clock();
    // print(arr);
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed);
 */
    printf("\nGenerando...");
    genera(arr, N);
    // print(arr);
    printf("\nOrdenando...");
    ini = clock();
    mergeSortI(arr, 0, N - 1);
    fin = clock();
    // print(arr);
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed); 


    printf("\nGenerando...");
    genera(arr, N);
    //print(arr);
    printf("\nOrdenando...");
    ini = clock();
    quickSort(arr, 0, N - 1);
    fin = clock();
    //print(arr);
    elapsed = (double)(fin - ini) / CLOCKS_PER_SEC;
    printf("\nTiempo: %lf\n", elapsed);







    free(arr);
    return 0;
}
