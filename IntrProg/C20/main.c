/**
 * @file main.c
 * @author Jose Luis
 * @brief Ejemplo de memoria dinamica
 * @version 0.1
 * @date 2023-04-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int * arr = (int*)malloc(1000 * sizeof(int));
    int *arr = (int *)calloc(1000, sizeof(int));
    arr = realloc(arr, 2000 * sizeof(int));

    if(arr == NULL) {
        printf("No fue posible asignar mas memoria\n");
        exit(0);
    }

    for (int i = 0; i < 2000; i++)
    {
        printf("%i ", *(arr + i));
    }

    free(arr);

    return 0;
}
