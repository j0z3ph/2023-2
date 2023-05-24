/**
 * @file prog2.c
 * @author Jose Luis
 * @brief Archivos 2
 * @version 0.1
 * @date 2023-05-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    char nombre[100];
    int car;
    FILE *file;
    printf("Nombre del archivo: ");
    scanf("%s", nombre);    
    file = fopen(nombre, "r");
    if(file == NULL) {
        printf("ERROR\n");
        return 1;
    }
    while(!feof(file)) {
        car = fgetc(file);
        putc(car, stdout);
    }

    fclose(file);
    

    return 0;
}
