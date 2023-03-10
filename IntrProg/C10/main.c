/**
 * @file main.c
 * @author Jose Luis
 * @brief Arreglos 1
 * @version 0.1
 * @date 2023-03-10
 * 
 * @copyright GPLv3
 * 
 */

#include<stdio.h>

int main()
{
    const int MAX = 10;
    int arreglo[MAX];

    for (int i = 0; i < MAX; i++)
    {
        arreglo[i] = MAX - i;
    }
    *(arreglo + 10) = 12;
    for (int idx = 0; idx < 15; idx++)
    {
        printf("%i\n", arreglo[idx]);
    }
    
    return 0;
}
