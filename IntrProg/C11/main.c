/**
 * @file main.c
 * @author Jose Luis
 * @brief Burbujazo
 * @version 0.1
 * @date 2023-03-17
 * 
 * @copyright GPL v3
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
#define true 1
#define false 0

int main()
{
    int arr[MAX];
    int aux = 0;
    int interambio = false;
    srand(time(NULL)); // inicializacion del generador de numeros aleatorios

    // Genera un arreglo de numeros aleatorios
    for (int i = 0; i < MAX; i++)
    {
        arr[i] = (rand() % 1000) + 50;
    }
    
    // burbuja
    for (int i = 0; i < MAX; i++)
    {
        interambio = false;
        for (int j = 0; j < MAX - 1 - i; j++)
        {
            if(arr[j] > arr[j+1]) {
                aux = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = aux;
                interambio = true;
            }
        }
        if (!interambio) break;
    }

    // Imprime el arreglo final
    printf("[ ");
    for (int i = 0; i < MAX; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("]\n"); 
    
    

    return 0;
}
