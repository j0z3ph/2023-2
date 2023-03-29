/**
 * @file recursion.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-03-29
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include"funciones.h"

int main()
{
    int n=0;
    printf("Usuario, proporcione un numero: ");
    scanf("%i", &n);
    cuentaR(n, 1);
    return 0;
}
