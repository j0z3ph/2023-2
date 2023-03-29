/**
 * @file funciones.c
 * @author Jose Luis
 * @brief Codigos de las funciones chidas
 * @version 0.1
 * @date 2023-03-29
 *
 * @copyright GPLv3
 *
 */
#include<stdio.h>
#include"funciones.h"

int factorial(int n)
{
    int res = n;
    if (n < 0)
    {
        return ERROR;
    }
    if (n == 0)
    {
        return 1;
    }
    for (int i = n - 1; i > 0; i--)
    {
        res = res * i;
    }
    return res;
}

int factorialR(int n) {
    if(n < 0) {
        return ERROR;
    }

    if(n == 0) {
        return 1;
    }

    if(n == 1) {
        return 1;
    }

    return n * factorialR(n-1);
}

void cuentaI(int n) {
    int i = 1;
    while(i <= n)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void cuentaR(int n, int i){
    if(i <= n)
    {
        printf("%d ", i);
        cuentaR(n, ++i);
    }
    if(i == n)
        printf("\n");
}

