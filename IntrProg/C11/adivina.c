/**
 * @file adivina.c
 * @author Yo merengues
 * @brief Programa que implementa la busqueda binaria
 * @version 0.1
 * @date 2023-03-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"funciones.h"
#define MAX 1000

int main()
{
    int arreglo[MAX], ale=0;
    srand(time(NULL));
    for (int i = 0; i < MAX; i++)
    {
        arreglo[i] = rand()%MAX;
    }
    //imprime(arreglo, MAX);
    burbujazo(arreglo, MAX);
    //imprime(arreglo, MAX);

    ale = rand()%100;
    printf("Numero a buscar: %i\n", ale);
    printf("\nResultado: %s\n", (busquedaB(arreglo, MAX, ale) == true ? "ENCONTRADO" : "!ENCONTRADO"));
    
    return 0;
}

