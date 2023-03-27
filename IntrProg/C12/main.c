/**
 * @file main.c
 * @author Jose Luis Cruz
 * @brief Ejemplos de funciones (paso de parametros)
 * @version 0.1
 * @date 2023-03-27
 * 
 * @copyright GPLv3
 * 
 */
#include<stdio.h>
#include"operaciones.h"

int main()
{
    int arr[3];
    int a = 5;
    int b = 7;
    int c = sumaRef(&a, &b);
    printf("%p - %p - %p\n", &arr[0], &arr[1], &arr[2]);
    printf("La suma de (%p) %d y (%p) %d es %d\n", &a, a, &b, b, c);
    
    return 0;
}

