/**
 * @file main.c
 * @author EDD 
 * @brief Programa 1
 * @version 0.1
 * @date 2023-02-14
 * 
 * @copyright GPL V3
 * 
 */

#include<stdio.h>
#include<stdlib.h>

void funcion() {
    int* n = (int*)malloc(sizeof(int));
    free(n);
}

int main(int argc, char const *argv[])
{
    while (1)
    {
        funcion();    
    }
    return 0;
}