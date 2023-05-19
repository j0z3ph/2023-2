/**
 * @file main.c
 * @author Jose Luis
 * @brief Manejo de archivos
 * @version 0.1
 * @date 2023-05-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    FILE *file;
    char texto[100];
    file = fopen("archivo.txt", "r+");
    if(file == NULL) {
        printf("No se pudo :c\n");
        return 1;
    }
    fgets(texto, 100, file);
    fgets(texto, 100, file);
    fprintf(file, "Hole e todes :D\n%i\n", -10);
    fclose(file);
    return 0;
}
