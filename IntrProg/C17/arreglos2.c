/**
 * @file arreglos2.c
 * @author Jose Luis
 * @brief Tadeo, no te duermas
 * @version 0.1
 * @date 2023-04-19
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int arr[10], *ptr;
    ptr=arr;
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        *(ptr+i) = rand() % 100;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("(%p)%i ", &arr[i], arr[i]);
    }
    
    return 0;
}
