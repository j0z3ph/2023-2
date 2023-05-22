/**
 * @file binarios.c
 * @author Jose Luis
 * @brief Archivos Binarios
 * @version 0.1
 * @date 2023-05-22
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    FILE *file;
    int entero = 10;
    file = fopen("archivo.txt", "wb");
    if(file == NULL) {
        printf("no fue posible abrir el archivo :c\n");
        return 1;
    }
    fwrite(&entero,sizeof(int),1,file);
    fclose(file);
    return 0;
}
