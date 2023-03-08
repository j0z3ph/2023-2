/**
 * @file main.c
 * @author Jose Luis
 * @brief Pruebas
 * @version 0.1
 * @date 2023-03-08
 * 
 * @copyright GPLv3
 * 
 */
#include<stdio.h>
#include<stdlib.h>

#ifdef __WIN32__
#include<conio.h>
#endif
#define PI 3.1416

int main(int argc, char const *argv[])
{
    int suma = 0;
    for (int i = 1; i < argc; i++)
    {
        suma += atoi(argv[i]);
    }
    

    #if __WIN32__
        printf("Estan en Windows");
    #else 
        printf("Estas en Unix");
    #endif


    return 0;
}
