/**
 * @file aleatorio.c
 * @author Jose Luis
 * @brief Acceso aleatorio
 * @version 0.1
 * @date 2023-05-22
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdio.h>

int main()
{
    FILE *file;
    int entero = 1;
    file = fopen("archivo.txt", "r+");
    if (file == NULL)
    {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }
    while (entero > 0)
    {
        printf("Escriba un numero: ");
        scanf("%i", &entero);
        if (entero > 0)
        {
            fseek(file, (entero - 1) * sizeof(int), SEEK_SET);
            fwrite(&entero, sizeof(int), 1, file);
        }
    }



    return 0;
}
