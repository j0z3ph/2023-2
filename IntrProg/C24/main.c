/**
 * @file main.c
 * @author Jose Luis
 * @brief Archivos
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    char cadena[100];
    FILE *file;
    printf("Escriba una cadena: ");
    fgets(cadena, 100, stdin);

    file = fopen("archivo.txt", "w");
    if(file == NULL) {
        printf("ERROR\n");
        return 1;
    }
    fprintf(file,"%s", cadena);
    fclose(file);
    return 0;
}
