/**
 * @file main3.c
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
    int car, cont = 0;
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
        if(car == '\n') cont++;
    }

    fclose(file);
    
    printf("Lineas: %i\n", cont+1);

    return 0;
}
