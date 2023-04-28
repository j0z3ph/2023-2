/**
 * @file lifo.c
 * @author Jose Luis
 * @brief Ejemplo de memoria dinamica (LIFO)
 * @version 0.1
 * @date 2023-04-28
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int *arr = (int *)malloc(sizeof(int));
    int cont = 0;
    char *resp = (char *)malloc(sizeof(char) * 4);

    for (int i = 0; i < argc; i++)
    {
        if (strcmp(argv[i], "-v") == 0)
        {
            printf("Help\nfifo\nEjemplo de una estructura lifo con memoria dinamica\n");
            printf("Version: 0.1.0\nAutor:Yo Mero\nDate: 2023/04/28\n");
            exit(0);
        }
    }

    while (1)
    {
        printf("Proporcione un numero o x para terminar: ");
        fgets(resp, 4, stdin);
        if (resp[0] == 'x')
            break;

        cont++;
        arr = (int *)realloc(arr, sizeof(int) * (cont + 1));
        for (int i = cont; i > 0; i--)
        {
            *(arr + i) = *(arr + i - 1);
        }
        *(arr) = atoi(resp);
    }
    for (int i = 0; i < cont; i++)
    {
        printf("%i ", *(arr + i));
    }
    printf("\n");
    return 0;
}
