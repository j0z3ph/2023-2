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
    file = fopen("archivo.txt", "a");
    if(file == NULL) {
        printf("No se pudo :c\n");
        return 1;
    }
    fprintf(file, "\nHola a todos :D\n%i", 10);
    fclose(file);
    return 0;
}
