/**
 * @file promedio.c
 * @author Jose Luis
 * @brief Promedios con arreglos dinamicos
 * @version 0.1
 * @date 2023-04-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double promedio(int *arr, int size)
{
    int suma = 0;
    double prom = 0.0;
    for (int i = 0; i < size; i++)
    {
        suma += *(arr + i);
    }
    prom = (double)suma / (double)size;
    return prom;
}

void imprime(int *arr, int size)
{
    printf("[ ");
    for (int i = 0; i < size; i++)
    {
        printf("%i ", *(arr + i));
    }
    printf("]");
}

int main(int argc, char const *argv[])
{
    int *arr = (int *)calloc(1, sizeof(int));
    int cont = 0;
    char *resp = (char *)calloc(10, sizeof(char));

    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "-v") == 0)
        {
            printf("promedio.c\nVersion 0.1.0\nDate: 23-04-26\nAuthor: Yo mero\n");
            exit(0);
        }
    }

    do
    {
        printf("Escriba un numero o . para terminar: ");
        fgets(resp, 10, stdin);
        if (resp[0] == '.')
            continue;
        *(arr + cont) = atoi(resp);
        cont++;
        arr = (int *)realloc(arr, sizeof(int) * (cont + 1));
    } while (resp[0] != '.');

    imprime(arr, cont);

    printf("\nEl promedio es: %.2lf\n", promedio(arr, cont));

    return 0;
}
