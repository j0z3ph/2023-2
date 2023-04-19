/**
 * @file punteros1.c
 * @author Jose Luis
 * @brief Ejemplo de punteros 1
 * @version 0.1
 * @date 2023-04-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>

int main()
{
    float var = 3.14;
    float* puntero;

    puntero = &var;

    *puntero = 6.28;

    printf("Direccion de var: %p\nContenido de puntero: %p\nDesreferencia de puntero: %f\n", 
    &var, puntero, *puntero);
    return 0;
}
