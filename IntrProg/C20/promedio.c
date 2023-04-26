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

int main(int argc, char const *argv[])
{
    int *arr = (int *)calloc(1, sizeof(int));
    int cont = 0;
    char *resp = (char *)calloc(5, sizeof(char));

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
        fgets(resp, 5, stdin);
        *(arr + cont) = atoi(resp);
    } while (strcmp(resp, ".") != 0);

    return 0;
}
