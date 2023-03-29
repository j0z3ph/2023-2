/**
 * @file main.c
 * @author Jose Luis
 * @brief Funciones
 * @version 0.1
 * @date 2023-03-29
 * 
 * @copyright GPLv3
 * 
 */

#include<stdio.h>
#include"funciones.h"

int main()
{
    int n = 0, fac = 0;
    printf("Usuario, proporcione un numero: ");
    scanf("%d", &n);
    fac = factorialR(n);
    printf("El factorial de %d es %d\n", n, fac);
    return 0;
}
