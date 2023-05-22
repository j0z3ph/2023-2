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
    for (int i = 1; i <= 10; i++)
    {   
        fwrite(&i,sizeof(int),1,file);
        fseek(file,5*sizeof(int),SEEK_CUR);
    }
    fclose(file);
    return 0;
}
