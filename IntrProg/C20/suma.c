/**
 * @file suma.c
 * @author Jose Luis
 * @brief Suma n numeros proporcionados como parametros
 * @version 0.1
 * @date 2023-04-26
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int suma = 0;
    if (argc == 1)
    {
        printf("USO\nsuma valor1 valor2 ... valorN\n");
        exit(0);
    }

    for (int i = 0; i < argc; i++)
    {
        int num = atoi(argv[i]);
        suma += num;
    }

    printf("%i\n", suma);

    return 0;
}
