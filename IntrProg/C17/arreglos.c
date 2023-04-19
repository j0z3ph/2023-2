/**
 * @file arreglos.c
 * @author Jose Luis
 * @brief Arreglos como punteros
 * @version 0.1
 * @date 2023-04-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>

int main()
{
    double arr[2];
    double *ptr;
    ptr = &arr[1];

    *arr = 45.76; // arr[0] = 1;
    *(arr+1) = 7.34; // arr[1] = 1;
    *(arr+2) = 9.34;
    *(arr-1) = 10.5;
    *ptr = 3.14;
    
    printf("%lf - %lf\n", *arr, *(arr+1));
    printf("%p - %p\n", arr, &arr[1]);
    return 0;
}
